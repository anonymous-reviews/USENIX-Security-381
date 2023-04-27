# Intercoder Agreement

Intercoder agreement is used to determine the validity of an open coding scheme across multiple individual coders.

Most techniques for grading intercoder agreement assume there a fixed number of entities which are labeled. Here, these entities are lines of source code. Each line can have one or more different labels. It is possible for there to be multiple of the same issue on the same line. In these cases, for simplicity, we treat the line as if it has one instance of that code.

Intercoder agreement was evaluated in two rounds. The feedback from the first round was used to improve the codebook from the next round. As a result, the codes for the first round (with Coder 2) use an old version of the codebook. The first round compared Coder 1's codes with Coder 2's codes. Before the second round coder 1's codes were updated to use the new codebook. Then the second round compared Coder 1's codes with Coder 3's codes.

One caveat deals with the co-ocurrence of common codes. Certain codes (especially C3.a. and C1.a.i., in the case of decompiled struct derferences) occur such that the existence of one code implies or almost always implies the existence of another (e.g. C1.a.i. imples the existence of a C3.a. on the same line). The codebook includes a provision that in these cases, the implied code need not be explicitly written. This is refered to as the "implicit codes principle." Coder 1 chose not to explicitly write the implied code, while Coders 2 and 3 sometimes did. In computing intercoder agreement, the implied codes were ignored.