# Install python-docx if not already installed:
# pip install python-docx

import docx
from docx import Document
from docx.enum.text import WD_COLOR_INDEX, WD_LINE_SPACING
from docx.shared import Inches, Pt, RGBColor


def create_paper_docx(filename="Memory_Quantized_Vector_Indexing.docx"):
    doc = Document()

    # Set standard 1-inch margins
    sections = doc.sections
    for section in sections:
        section.top_margin = Inches(1.0)
        section.bottom_margin = Inches(1.0)
        section.left_margin = Inches(1.0)
        section.right_margin = Inches(1.0)

    # Base styling (Times New Roman, 1.5 line spacing)
    normal_style = doc.styles["Normal"]
    normal_style.font.name = "Times New Roman"
    normal_style.font.size = Pt(11)
    normal_style.font.color.rgb = RGBColor(0x22, 0x22, 0x22)
    normal_style.paragraph_format.line_spacing_rule = WD_LINE_SPACING.ONE_POINT_FIVE
    normal_style.paragraph_format.space_after = Pt(6)

    # Helper function to add text with yellow-highlighted citations
    def add_annotated_paragraph(text, heading_level=None):
        if heading_level:
            p = doc.add_heading(level=heading_level)
            p.paragraph_format.line_spacing_rule = WD_LINE_SPACING.ONE_POINT_FIVE
            p.paragraph_format.space_after = Pt(4)
        else:
            p = doc.add_paragraph()

        # Parse bare citation brackets
        parts = text.split("[")
        for idx, part in enumerate(parts):
            if idx == 0:
                p.add_run(part)
            else:
                if "]" in part:
                    citation_num, rest = part.split("]", 1)
                    cite_run = p.add_run(f"[{citation_num}]")
                    cite_run.font.highlight_color = WD_COLOR_INDEX.YELLOW
                    p.add_run(rest)
                else:
                    p.add_run("[" + part)

    # Title & Metadata
    title_p = doc.add_paragraph()
    title_run = title_p.add_run(
        "Memory-Quantized Vector Indexing for High-Dimensional Similarity Search"
    )
    title_run.font.size = Pt(18)
    title_run.font.bold = True
    title_p.paragraph_format.space_after = Pt(8)

    add_annotated_paragraph(
        "Keywords: approximate nearest neighbor search, vector quantization, product quantization, "
        "hierarchical navigable small world, distance estimation, memory compression [53, 77, 250]"
    )

    # Abstract
    add_annotated_paragraph("Abstract", heading_level=2)
    add_annotated_paragraph(
        "Vector nearest neighbor search has played an important role in information retrieval area, such as multimedia search "
        "and web search, which provides relevant results by searching vectors with minimum distance to the query vector. [138] "
        "Exact solutions for K-nearest neighbor search are not applicable in big data scenario due to substantial computation cost "
        "and high query latency. [138] Quantization based techniques are the current state-of-the-art for scaling maximum inner "
        "product search to massive databases. [43] The key idea is to decomposes the space into a Cartesian product of low dimensional "
        "subspaces and to quantize each subspace separately. [250] A vector is represented by a short code composed of its subspace "
        "quantization indices. [250] The Euclidean distance between two vectors can be efficiently estimated from their codes. [250] "
        "We present a new approach for the approximate K-nearest neighbor search based on navigable small world graphs with controllable "
        "hierarchy (Hierarchical NSW, HNSW). [53] Starting search from the upper layer together with utilizing the scale separation "
        "boosts the performance compared to NSW and allows a logarithmic complexity scaling. [53] Current state-of-the-art approximate "
        "nearest neighbor search (ANNS) algorithms generate indices that must be stored in main memory for fast high-recall search. [66] "
        "This makes them expensive and limits the size of the dataset. [66] We present a new graph-based indexing and search system "
        "called DiskANN that can index, store, and search a billion point database on a single workstation with just 64GB RAM and an "
        "inexpensive solid-state drive (SSD). [66] Motivated by this, we propose a new randomized quantization method named RaBitQ, "
        "which quantizes D-dimensional vectors into D-bit strings. [263] RaBitQ guarantees a sharp theoretical error bound and provides "
        "good empirical accuracy at the same time. [263] MRQ leverages data distribution to achieve better distance correction and a higher "
        "vector compression ratio. [77] By combining the high-recall, low-latency properties of graph-based methods with the memory "
        "efficiency and scalability properties of compression-based methods, we established the new state-of-the-art for indexing and "
        "serving billion point datasets. [74]"
    )

    # Section 1
    add_annotated_paragraph("1. Introduction", heading_level=1)
    add_annotated_paragraph(
        "Computing Euclidean distances between high dimensional vectors is a fundamental requirement in many applications. [250] "
        "Nearest neighbor search is inherently expensive due to the curse of dimensionality. [250] Focusing on the D-dimensional "
        "Euclidean space R^D, the problem is to find the element NN(x), in a finite set Y of n vectors, minimizing the distance to the "
        "query vector x: NN(x) = arg min d(x, y). [250] As the dimensionality increases, these methods are outperformed by bruteforce "
        "linear scans and large databases make this problem even more salient. [87] To tackle this issue, the research community has "
        "focused on Approximate Nearest Neighbor (ANN) search, which aims at finding close enough vectors instead of the exact closest ones. [87]"
    )
    add_annotated_paragraph(
        "When targeting to the super large scale vector search scenarios, such as web search, the memory cost will become extremely "
        "expensive. [138] There is an increasing request for the hybrid ANNS solutions that use small memory and inexpensive disk to "
        "serve the large scale datasets. [138] The inverted index based methods split the vector space into K Voronoi regions by KMeans "
        "clustering and only do search in a few regions that are closed to the query. [139] To reduce the memory cost, they use vector "
        "quantization, e.g. Product Quantization (PQ), to compress the vectors and store them in the memory. [139] Product Quantization "
        "(PQ) is a widely used solution which offers high performance, i.e., low response time while preserving a high accuracy. [87] "
        "PQ represents high-dimensional vectors (e.g., image descriptors) by compact codes. [87] Hence, very large databases can be stored "
        "in memory, allowing NN queries without resorting to slow I/O operations. [87]"
    )
    add_annotated_paragraph(
        "A product quantizer can generate an exponentially large codebook at very low memory/time cost. [113] The essence of PQ is to "
        "decompose the high-dimensional vector space into the Cartesian product of subspaces and then quantize these subspaces separately. [113] "
        "The optimal space decomposition is important for the PQ performance, but still remains an unaddressed issue. [113] In most "
        "traditional quantization works, the objective in the quantization procedures is to minimize the reconstruction error for the "
        "database points. [43] We show this is a suboptimal loss function for MIPS. [43] This is because for a given query, quantization "
        "error for database points that score higher, or have larger inner products, is more important. [43] Using this intuition, we "
        "propose a new family of score-aware quantization loss functions and apply it to multiple quantization techniques. [43]"
    )
    add_annotated_paragraph(
        "Proximity graph K-ANNS algorithms have recently gained popularity offering a better performance on high dimensional datasets. [53] "
        "In the vast majority of studied graph algorithms searching takes a form of greedy routing in k-Nearest Neighbor (k-NN) graphs. [54] "
        "Hierarchical NSW incrementally builds a multi-layer structure consisting from hierarchical set of proximity graphs (layers) for "
        "nested subsets of the stored elements. [53] The maximum layer in which an element is present is selected randomly with an "
        "exponentially decaying probability distribution. [53] This allows producing graphs similar to the previously studied Navigable "
        "Small World (NSW) structures while additionally having the links separated by their characteristic distance scales. [53]"
    )
    add_annotated_paragraph(
        "Despite their empirical success, we note that these methods do not have a theoretical error bound and are observed to fail "
        "disastrously on some real-world datasets. [263] Motivated by this, we propose a new randomized quantization method named RaBitQ, "
        "which quantizes D-dimensional vectors into D-bit strings. [263] RaBitQ guarantees a sharp theoretical error bound and provides "
        "good empirical accuracy at the same time. [263] However, this method requires that the quantization bit must be equal to the "
        "vector dimension resulting in a fixed compression ratio which limits its efficiency and flexibility. [77] We analyze the data "
        "distribution of the existing vector datasets and observe that after the vector data is rotated by the PCA matrix, the variance "
        "of the dimensions exhibits a long-tail distribution. [78] MRQ reduces the query latency based on a highly efficient distance "
        "computation and correction scheme. [77]"
    )

    # Section 2
    add_annotated_paragraph("2. Literature Review", heading_level=1)
    add_annotated_paragraph(
        "The in-memory algorithms for approximate nearest neighbor search (ANNS) have achieved great success for fast high-recall "
        "search, but are extremely expensive when handling very large scale database. [13] There are only a few approaches working "
        "on the hybrid ANNS solutions, including DiskANN and HM-ANN. [13] Both of them are graph based solutions. [13] DiskANN uses "
        "Product Quantization (PQ) to compress the vectors stored in the memory while putting the navigating spread-out graph along "
        "with the full-precision vectors on the disk. [14] When a query comes, it traverses the graph according to the distance of "
        "quantized vectors and then reranks the candidates according to distance of the full-precision vectors. [14]"
    )
    add_annotated_paragraph(
        "We argue that the simple inverted index approach can also achieve state-of-the-art performance for large scale datasets in "
        "terms of recall, latency and memory cost. [14] We propose SPANN, a simple but surprising efficient memory-disk hybrid vector "
        "indexing and search system, that follows the inverted index methodology. [14] SPANN only stores the centroid points of the "
        "posting lists in the memory while putting the large posting lists in the disk. [14] We guarantee both low latency and high "
        "recall by greatly reducing the number of disk accesses and improving the quality of posting lists. [14]"
    )
    add_annotated_paragraph(
        "To further improve the search-efficiency and scalability of graph-based methods, we start by introducing four aspects: (1) "
        "ensuring the connectivity of the graph; (2) lowering the average out-degree of the graph for fast traversal; (3) shortening "
        "the search path; and (4) reducing the index size. [99] We propose a novel graph structure called Monotonic Relative Neighborhood "
        "Graph (MRNG) which guarantees very low search complexity (close to logarithmic time). [99] To further lower the indexing "
        "complexity and make it practical for billion-node ANNS problems, we propose a novel graph structure named Navigating Spreading-out "
        "Graph (NSG) by approximating the MRNG. [99]"
    )
    add_annotated_paragraph(
        "Graph-based methods rely on greedy graph search to traverse the data points as embedding vectors in a database. [26] Under "
        "this greedy search scheme, we make a key observation: many distance computations do not influence search updates so these "
        "computations can be approximated without hurting performance. [26] As a result, we propose FINGER, a fast inference method "
        "to achieve efficient graph search. [26] FINGER approximates the distance function by estimating angles between neighboring "
        "residual vectors with low-rank bases and distribution matching. [26] The approximated distance can be used to bypass unnecessary "
        "computations, which leads to faster searches. [26]"
    )

    # Literature Table
    table_data = [
        [
            "Reference",
            "System / Architecture",
            "Core Methodology",
            "Index Storage Tier",
            "Distance / Search Mechanism",
        ],
        [
            "[1]",
            "Product Quantization (PQ) [250]",
            "Subspace Cartesian decomposition [250]",
            "DRAM [87]",
            "Asymmetric Distance Computation (ADC) [250]",
        ],
        [
            "[2]",
            "Optimized Product Quantization (OPQ) [113]",
            "Orthogonal rotation + Eigenvalue allocation [114, 115]",
            "DRAM [113]",
            "Rotated lookup tables [116]",
        ],
        [
            "[3]",
            "PQ Fast Scan [87]",
            "Vector grouping + minimum tables [92]",
            "SIMD Registers / L1 Cache [87]",
            "In-register SIMD shuffles (pshufb) [87, 91]",
        ],
        [
            "[4]",
            "GPU Similarity Search (Faiss) [1]",
            "In-register sorting primitive [4]",
            "GPU Register File / Global Memory [3]",
            "WarpSelect bitonic networks [5]",
        ],
        [
            "[5]",
            "Hierarchical Navigable Small World (HNSW) [53]",
            "Multi-layer proximity graph [53]",
            "DRAM [60]",
            "Greedy search with heuristic edge pruning [56, 57]",
        ],
        [
            "[6]",
            "Navigating Spreading-out Graph (NSG) [99]",
            "Monotonic Relative Neighborhood Graph approximation [99]",
            "DRAM [108]",
            "Best-first search from Navigating Node [106, 107]",
        ],
        [
            "[7]",
            "DiskANN [66]",
            "Vamana graph construction [68]",
            "SSD (Full vectors + Graph) + DRAM (PQ) [68, 71]",
            "BeamSearch + sector re-ranking [71, 72]",
        ],
        [
            "[8]",
            "ScaNN [43]",
            "Score-aware anisotropic loss [43]",
            "DRAM [44]",
            "Parallel vs. orthogonal residual weighting [45]",
        ],
        [
            "[9]",
            "SPANN [13]",
            "Memory-disk hybrid inverted index [13]",
            "SSD (Posting lists) + DRAM (Centroids) [13]",
            "Query-aware dynamic pruning [13, 17]",
        ],
        [
            "[10]",
            "FINGER [26]",
            "Residual angle modeling with low-rank bases [26]",
            "DRAM [41]",
            "SVD projection + Gaussian matching [31, 32]",
        ],
        [
            "[11]",
            "RaBitQ [263]",
            "Randomized bi-valued hypercube codebook [263]",
            "DRAM [263]",
            "Bitwise XOR + POPCNT estimator [263, 269]",
        ],
        [
            "[12]",
            "Minimization Residual Quantization (MRQ) [77]",
            "PCA variance split + residual error bounds [78, 81]",
            "DRAM [78]",
            "Multi-stage error-bound correction [78, 82]",
        ],
    ]

    t = doc.add_table(rows=len(table_data), cols=5)
    t.autofit = True
    for r_idx, row in enumerate(table_data):
        for c_idx, val in enumerate(row):
            cell = t.cell(r_idx, c_idx)
            cell.text = ""
            cp = cell.paragraphs[0]
            cp.paragraph_format.line_spacing_rule = WD_LINE_SPACING.ONE_POINT_FIVE
            cp.paragraph_format.space_after = Pt(2)
            parts = val.split("[")
            for idx, part in enumerate(parts):
                if idx == 0:
                    r = cp.add_run(part)
                    if r_idx == 0:
                        r.font.bold = True
                else:
                    if "]" in part:
                        cite_num, rest = part.split("]", 1)
                        cite_r = cp.add_run(f"[{cite_num}]")
                        cite_r.font.highlight_color = WD_COLOR_INDEX.YELLOW
                        if r_idx == 0:
                            cite_r.font.bold = True
                        r2 = cp.add_run(rest)
                        if r_idx == 0:
                            r2.font.bold = True
                    else:
                        r = cp.add_run("[" + part)
                        if r_idx == 0:
                            r.font.bold = True

    # Section 3
    add_annotated_paragraph(
        "3. Methodology & System Architecture", heading_level=1
    )
    add_annotated_paragraph(
        "3.1 Space Decomposition and Vector Quantization", heading_level=2
    )
    add_annotated_paragraph(
        "A vector quantizer is a function q that maps a d-dimensional vector x to a d-dimensional vector c_i belonging to a "
        "predefined set of vectors C. [88] Vectors c_i are called centroids, and the set of centroids C, of size k, is the codebook. [88] "
        "Product Quantization (PQ) addresses this issue by dividing an input vector x of dimensionality d into m distinct sub-vectors "
        "u_j(x), 0 <= j < m, and quantizing each sub-vector separately using distinct lower complexity sub-quantizers. [88]"
    )
    add_annotated_paragraph(
        "The Asymmetric Distance Computation (ADC) method allows computing the distance between a query vector y and a database vector p, "
        "without quantizing the query vector: [89]\n"
        "d_tilde(p, y) = sum_{j=0}^{m-1} d(u_j(y), C_j[p[j]])    (1) [89]\n"
        "where d(u_j(y), C_j[p[j]]) is the squared distance between the j-th sub-vector of the query vector y and C_j[p[j]], the j-th "
        "centroid associated with the database vector p. [89] Each D_j distance table is composed of the distance between the j-th "
        "sub-vector of the query vector y and every centroid of the j-th sub-quantizer: [89]\n"
        "D_j = (d(u_j(y), C_j[0]), ..., d(u_j(y), C_j[k* - 1]))    (2) [89]\n"
        "Using these distance tables, the ADC equation can be rewritten as: [89]\n"
        "d_tilde(p, y) = sum_{j=0}^{m-1} D_j[p[j]]    (3) [89]"
    )

    add_annotated_paragraph(
        "3.2 Optimization and Anisotropic Residual Loss", heading_level=2
    )
    add_annotated_paragraph(
        "Considering the sub-codebooks and the space decomposition, we optimize the following objective: [115]\n"
        "min sum ||x - c(i(x))||^2  s.t.  c in C = {c | Rc in C^1 x ... x C^M, R^T R = I}    (4) [115]\n"
        "The lower bound is achieved if the achievability in arithmetic and geometric means and Fischer's inequality are both satisfied: "
        "(i) Independence. If we align the data by PCA, the equality in Fischer's inequality is achieved. (ii) Balanced the variances "
        "of subspaces. The equality in AM-GM is achieved if |Sigma_mm_hat| has the same value for all subspaces. [117]"
    )
    add_annotated_paragraph(
        "The residual error of a quantization x_tilde_i is defined as x_i - x_tilde_i. [45] The parallel residual error is the component "
        "of the residual error parallel to the datapoint x_i; it can be computed as: [45]\n"
        "r_parallel(x_i, x_tilde_i) = (<x_i - x_tilde_i, x_i> x_i) / ||x_i||^2    (5) [45]\n"
        "Orthogonal residual error is defined analogously, and can be computed as: [45]\n"
        "r_perp(x_i, x_tilde_i) = (x_i - x_tilde_i) - r_parallel(x_i, x_tilde_i)    (6) [45]\n"
        "Assuming that query q is uniformly distributed in the d-dimensional unit sphere, the score-aware quantization loss equals: [45, 46]\n"
        "l(x_i, x_tilde_i, w) = h_parallel ||r_parallel||^2 + h_perp ||r_perp||^2    (7) [46]"
    )

    add_annotated_paragraph(
        "3.3 Randomized Quantization and Residual Decomposition",
        heading_level=2,
    )
    add_annotated_paragraph(
        "We first normalize the raw vectors into unit vectors. [264] Specifically, let c be the centroid of the raw data vectors. [264] "
        "We normalize the raw data vectors o_r to be o := (o_r - c) / ||o_r - c||. [264] The following expressions bridge the distance "
        "between the raw vectors and the inner product of the normalized vectors: [264]\n"
        "||o_r - q_r||^2 = ||o_r - c||^2 + ||q_r - c||^2 - 2 ||o_r - c|| ||q_r - c|| <q, o>    (8) [264]\n"
        "Our final codebook is given as follows: [265]\n"
        "C_rand := {Px | x in C}    (9) [265]\n"
        "where C := {+1/sqrt(D), -1/sqrt(D)}^D and P is a random orthogonal matrix. [265] The unbiasedness is given as "
        "E[<o_bar, q> / <o_bar, o>] = <o, q>. [266] The error bound of the estimator is given as: [267]\n"
        "P(|<o_bar, q>/<o_bar, o> - <o, q>| > sqrt((1 - <o_bar, o>^2)/<o_bar, o>^2) * eps_0 / sqrt(D - 1)) <= 2 e^(-c_0 eps_0^2)    (10) [267]"
    )
    add_annotated_paragraph(
        "The vector x in S can be projected into a d-dimensional space (d < D) using an orthogonal matrix R, that is, x_d = Rx. [80] "
        "Then the precise square Euclidean distance dis between database vector x and query vector q can be expressed as: [80]\n"
        "dis = ||x - q||^2 = ||x_d - q_d||^2 + ||x_r - q_r||^2    (11) [80]\n"
        "where x_r is the vector residual dimension (r + d = D). [80] With the variance computed, we can use Chebyshev's inequality to "
        "get the residual error bound: P(|<x_r, q_r>| >= m * sigma) <= 1 / m^2. [81]"
    )

    add_annotated_paragraph(
        "3.4 Proximity Graph and Disk-Resident Hybrid Indexing",
        heading_level=2,
    )
    add_annotated_paragraph(
        "Hierarchical NSW incrementally builds a multi-layer structure consisting from hierarchical set of proximity graphs (layers) for "
        "nested subsets of the stored elements. [53] For every element we select an integer level l which defines the maximum layer for "
        "which the element belongs to. [55] If we set an exponentially decaying probability of l we get a logarithmic scaling of the "
        "expected number of layers in the structure. [55] The search procedure is an iterative greedy search starting from the top layer "
        "and finishing at the zero layer. [55] The heuristic examines the candidates starting from the nearest (with respect to the inserted "
        "element) and creates a connection to a candidate only if it is closer to the base (inserted) element compared to any of the "
        "already connected candidates. [56]"
    )
    add_annotated_paragraph(
        "To reduce the number of sequential disk reads, we would like to ensure that the distance to the query decreases by a multiplicative "
        "factor of alpha > 1 at every node along the search path. [69] We store the compressed vectors of all the data points in memory, "
        "and store the graph along with the full-precision vectors on the SSD. [71] On the disk, for each point i, we store its full "
        "precision vector x_i followed by the identities of its R neighbors. [71] To reduce the number of round trips to SSD without "
        "increasing compute excessively, we fetch the neighborhoods of a small number, W, of the closest points in L \\ V in one shot (BeamSearch). [71]"
    )

    # Section 4
    add_annotated_paragraph(
        "4. Hardware Acceleration & Fast Distance Kernels", heading_level=1
    )
    add_annotated_paragraph(
        "4.1 In-Register Lookups via SIMD (PQ Fast Scan)", heading_level=2
    )
    add_annotated_paragraph(
        "The key idea behind PQ Fast Scan is to use small tables, sized to fit SIMD registers instead of the cache-resident distance "
        "tables. [91] These small tables are used to compute lower bounds on distances, without accessing the L1 cache. [91] To compute "
        "lower bounds, we need to look up values in small tables stored in SIMD registers using the pshufb instruction. [91]"
    )
    add_annotated_paragraph(
        "We load these quantized portions into SIMD registers before scanning each group. [94] As small tables contain 16 values, they "
        "are indexed by 4 bits. [94] Given a database vector p, we use the 4 least significant bits of p[0]...p[3] to index values in "
        "S_0...S_3 and the 4 most significant bits of p[4]...p[7] to index values in S_4...S_7. [94] To decide on pruning pqdistance "
        "computations, the lower bound is compared to the quantized value of min, the distance between the query vector and the current "
        "nearest neighbor. [94]"
    )

    add_annotated_paragraph(
        "4.2 In-Register GPU k-Selection (WarpSelect)", heading_level=2
    )
    add_annotated_paragraph(
        "Our k-selection implementation, WARPSELECT, maintains state entirely in registers, requires only a single pass over data and "
        "avoids cross-warp synchronization. [5] Since the register file provides much more storage than shared memory, it supports "
        "k < 1024. [5] Each warp is dedicated to k-selection to a single one of the n arrays. [5]"
    )
    add_annotated_paragraph(
        "Each lane j maintains a small queue of t elements in registers, called the thread queues [T_i^j], ordered from largest to "
        "smallest. [5] The warp shares a lane-stride register array of k smallest seen elements, [W_i], called the warp queue. [5] "
        "If any lane has its invariant violated, then the warp uses ODD-MERGE to merge and sort the thread and warp queues together. [5] "
        "The new warp queue will be the min-k elements across the merged, sorted queues, and the new thread queues will be the remainder. [5, 6]"
    )

    add_annotated_paragraph(
        "4.3 Hardware Bitwise Operations (RaBitQ)", heading_level=2
    )
    add_annotated_paragraph(
        "The inner product can be expressed as a weighted sum of the inner product of the binary vectors: [268]\n"
        "<x_bar_b, q_bar_u> = sum_{j=0}^{B_q - 1} 2^j <x_bar_b, q_bar_u^(j)>    (12) [268]\n"
        "In particular, we note that the inner product of binary vectors can be efficiently achieved by bitwise operations, i.e., "
        "bitwise-and and popcount (a.k.a., bitcount). [268] Thus, the computation of <o_bar, q> is finally reduced to B_q bitwise-and "
        "and popcount operations on D-bit strings, which are well supported by virtually all platforms. [268]"
    )

    # Section 5
    add_annotated_paragraph(
        "5. Empirical Evaluation & Benchmark Analysis", heading_level=1
    )
    add_annotated_paragraph(
        "5.1 Datasets and Performance Metrics", heading_level=2
    )
    add_annotated_paragraph(
        "The SIFT1M dataset contains one million of 128-dimensional float SIFT descriptors as the base set and 10,000 query descriptors "
        "as the test set. [143] The SIFT1B dataset contains one billion of 128-dimensional byte vectors as the base set and 10,000 query "
        "vectors as the test set. [143] The DEEP1B dataset contains one billion of 96-dimensional float vectors as the base set and 10,000 "
        "query vectors as the test set. [143] The GIST1M dataset consists of 1 million 960-d GIST vectors and 1k queries. [120] The "
        "GloVe dataset is a collection of 1.2 million 100-dimensional word embeddings trained on tweets. [49, 61]"
    )
    add_annotated_paragraph(
        "The comparison metrics to demonstrate the performance are: [143]\n"
        "1. Recall: We compare the R vector ids returned by ANNS with the R ground truth vector ids to calculate the recall@R. [143]\n"
        "2. Latency: We use the query response time in milliseconds as the query latency. [143]\n"
        "3. VQ (Vector-Query): The product of the number of vectors and the number of queries per second a machine can serve. [143]"
    )

    # Benchmark Table
    bench_data = [
        [
            "Algorithm",
            "Dataset",
            "Code / Metric",
            "Search Time",
            "Recall Measure",
        ],
        [
            "PQ ADC [1]",
            "SIFT1M (1M, 128d)",
            "64-bit (8 bytes)",
            "17.2 ms",
            "R@100 = 0.921",
        ],
        [
            "OPQ_NP [2]",
            "SIFT1M (1M, 128d)",
            "64-bit (8 bytes)",
            "20.0 ms",
            "R@100 = 0.970",
        ],
        [
            "PQ Fast Scan [3]",
            "SIFT1B (1B, 128d)",
            "64-bit (8 bytes)",
            "10.0 ms",
            "Top-100 prune",
        ],
        [
            "HNSW [5]",
            "SIFT1M (1M, 128d)",
            "M=16, efC=100",
            "0.12 ms",
            "1-NN Rec = 0.90",
        ],
        [
            "NSG [6]",
            "SIFT1M (1M, 128d)",
            "max degree=50",
            "0.08 ms",
            "R@100 = 0.993",
        ],
        [
            "DiskANN [7]",
            "SIFT1B (1B, 128d)",
            "R=128, L=125, SSD",
            "3.0 ms",
            "1-rec@1 = 0.95",
        ],
        [
            "ScaNN [8]",
            "GloVe (1.2M, 100d)",
            "Anisotropic 200-bit",
            "0.22 ms (4500 QPS)",
            "R@10 = 0.920",
        ],
        [
            "SPANN [9]",
            "SIFT1B (1B, 128d)",
            "32GB RAM + SSD",
            "1.0 ms",
            "1-rec@1 = 0.90",
        ],
        [
            "FINGER [10]",
            "SIFT1M (1M, 128d)",
            "Rank r=16",
            "0.05 ms",
            "R@10 = 0.980",
        ],
        [
            "RaBitQ [11]",
            "GIST1M (1M, 960d)",
            "960 bits (120 bytes)",
            "2.5 ns/dim",
            "Max err < 40%",
        ],
        [
            "MRQ [12]",
            "GIST1M (1M, 960d)",
            "128 bits (16 bytes)",
            "0.8 ms",
            "R@20 = 0.950",
        ],
    ]

    t2 = doc.add_table(rows=len(bench_data), cols=5)
    t2.autofit = True
    for r_idx, row in enumerate(bench_data):
        for c_idx, val in enumerate(row):
            cell = t2.cell(r_idx, c_idx)
            cell.text = ""
            cp = cell.paragraphs[0]
            cp.paragraph_format.line_spacing_rule = WD_LINE_SPACING.ONE_POINT_FIVE
            cp.paragraph_format.space_after = Pt(2)
            parts = val.split("[")
            for idx, part in enumerate(parts):
                if idx == 0:
                    r = cp.add_run(part)
                    if r_idx == 0:
                        r.font.bold = True
                else:
                    if "]" in part:
                        cite_num, rest = part.split("]", 1)
                        cite_r = cp.add_run(f"[{cite_num}]")
                        cite_r.font.highlight_color = WD_COLOR_INDEX.YELLOW
                        if r_idx == 0:
                            cite_r.font.bold = True
                        r2 = cp.add_run(rest)
                        if r_idx == 0:
                            r2.font.bold = True
                    else:
                        r = cp.add_run("[" + part)
                        if r_idx == 0:
                            r.font.bold = True

    add_annotated_paragraph(
        "5.2 Comparative Analysis on Billion-Scale and Clustered Datasets",
        heading_level=2,
    )
    add_annotated_paragraph(
        "On the billion point SIFT1B bigann dataset, DiskANN serves > 5000 queries a second with < 3ms mean latency and 95%+ 1-recall@1 "
        "on a 16 core machine, where state-of-the-art billion-point ANNS algorithms with similar memory footprint like FAISS and "
        "IVFOADC+G+P plateau at around 50% 1-recall@1. [66] Experiment results demonstrate that SPANN is 2x faster than the state-of-the-art "
        "ANNS solution DiskANN to reach the same recall quality 90% with same memory cost in three billion-scale datasets. [13] It can "
        "reach 90% recall@1 and recall@ 10 in just around one millisecond with only 32GB memory cost. [13]"
    )
    add_annotated_paragraph(
        "When using the closest neighbors as connections for the proximity graph, the Hierarchical NSW algorithm fails to achieve a high "
        "recall for clustered data because the search stucks at the clusters boundaries. [58] Contrary, when the heuristic is used, "
        "clustering leads to even higher performance. [58] Our distance computation method MRQ achieves a higher in-memory AKNN search "
        "efficiency while using fewer quantization bits than RabitQ. [84] Specifically, our method uses only 1/7 of the quantization "
        "bits of RabitQ and achieves a 2x search latency reduction on the GIST dataset; use 1/3 bits and achieve a 2.6x latency reduction "
        "on OpenAI-1536 dataset; use 1/6 bits and achieve 3.4x latency reduction on OpenAI-3072 datasets. [84]"
    )

    # Section 6
    add_annotated_paragraph(
        "6. Conclusion & Future Recommendations", heading_level=1
    )
    add_annotated_paragraph(
        "We presented and evaluated a new graph-based indexing algorithm called Vamana for ANNS whose indices are comparable to the current "
        "state-of-the-art methods for in-memory search in high-recall regimes. [74] In addition, we demonstrated the construction of a "
        "high-quality SSD-resident index DiskANN on a billion point dataset using only 64GB of main memory. [74] By combining the "
        "high-recall, low-latency properties of graph-based methods with the memory efficiency and scalability properties of compression-based "
        "methods, we established the new state-of-the-art for indexing and serving billion point datasets. [74]"
    )
    add_annotated_paragraph(
        "The arithmetic throughput and memory bandwidth of GPUs are well into the teraflops and hundreds of gigabytes per second. [10] "
        "However, implementing algorithms that approach these performance levels is complex and counter-intuitive. [10] In this paper, "
        "we presented the algorithmic structure of similarity search methods that achieves near-optimal performance on GPUs. [10]"
    )
    add_annotated_paragraph(
        "In frequent updating scenarios, the indexing time is also important. [111] Building one NSG on the large dataset is impractical. [111] "
        "It's also possible for NSG to enable incremental indexing. [111] We will leave this to future works. [111] It remains to be an "
        "interesting question whether dedicated hardware-aware optimization can further improve the performance of RaBitQ. [275] Some "
        "interesting research directions include applying our method in other scenarios of ANN search (e.g., with graph-based indexes or "
        "on other storage devices). [275]"
    )

    # References
    add_annotated_paragraph("References", heading_level=1)
    refs = [
        '[1] H. Jégou, M. Douze, and C. Schmid, "Product quantization for nearest neighbor search," IEEE Transactions on Pattern Analysis and Machine Intelligence, vol. 33, no. 1, pp. 117–128, 2011. [249]',
        '[2] T. Ge, K. He, Q. Ke, and J. Sun, "Optimized product quantization," IEEE Transactions on Pattern Analysis and Machine Intelligence, vol. 36, no. 4, pp. 744–755, 2014. [113]',
        '[3] F. André, A.-M. Kermarrec, and N. Le Scouarnec, "Cache locality is not enough: High-performance nearest neighbor search with product quantization fast scan," Proceedings of the VLDB Endowment, vol. 9, no. 4, pp. 288–299, 2015. [87]',
        '[4] J. Johnson, M. Douze, and H. Jégou, "Billion-scale similarity search with GPUs," IEEE Transactions on Big Data, vol. 7, no. 3, pp. 535–547, 2017. [1, 23]',
        '[5] Y. A. Malkov and D. A. Yashunin, "Efficient and robust approximate nearest neighbor search using Hierarchical Navigable Small World graphs," IEEE Transactions on Pattern Analysis and Machine Intelligence, vol. 42, no. 4, pp. 824–836, 2018. [24, 53]',
        '[6] C. Fu, C. Xiang, C. Wang, and D. Cai, "Fast approximate nearest neighbor search with the navigating spreading-out graph," Proceedings of the VLDB Endowment, vol. 12, no. 5, pp. 461–474, 2019. [99]',
        '[7] S. J. Subramanya, Devvrit, R. Kadekodi, R. Krishaswamy, and H. V. Simhadri, "DiskANN: Fast accurate billion-point nearest neighbor search on a single node," in Advances in Neural Information Processing Systems (NeurIPS), vol. 32, 2019. [66]',
        '[8] R. Guo, P. Sun, E. Lindgren, Q. Geng, D. Simcha, F. Chern, and S. Kumar, "Accelerating large-scale inference with anisotropic vector quantization," in Proceedings of the 37th International Conference on Machine Learning (ICML), 2020, pp. 3887–3896. [43]',
        '[9] Q. Chen, B. Zhao, H. Wang, M. Li, C. Liu, Z. Li, M. Yang, and J. Wang, "SPANN: Highly-efficient billion-scale approximate nearest neighbor search," in Advances in Neural Information Processing Systems (NeurIPS), vol. 34, 2021. [13]',
        '[10] P. H. Chen, W.-c. Chang, I. S. Dhillon, H.-f. Yu, and C.-j. Hsieh, "FINGER: Fast inference for graph-based approximate nearest neighbor search," in Proceedings of the ACM Web Conference, 2022. [26]',
        '[11] J. Gao and C. Long, "RaBitQ: Quantizing high-dimensional vectors with a theoretical error bound for approximate nearest neighbor search," Proceedings of the ACM on Management of Data (SIGMOD), vol. 2, no. 3, 2024. [262]',
        '[12] M. Yang, W. Li, and W. Wang, "Fast high-dimensional approximate nearest neighbor search with efficient index time and space," Proceedings of the ACM on Management of Data, 2025. [77]',
    ]
    for r in refs:
        add_annotated_paragraph(r)

    doc.save(filename)
    print(f"Document saved successfully as '{filename}'.")


if __name__ == "__main__":
    create_paper_docx()