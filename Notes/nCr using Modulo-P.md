**nCr using below formula**<br />
   C(n, r) = C(n-1, r-1) + C(n-1, r)<br />
   C(n, 0) = C(n, n) = 1<br />

**Working of Above formula and Pascal Triangle:**<br />
    
*Let us see how above formula works for C(4, 3)*<br />

    1==========>> n = 0, C(0, 0) = 1<br />
    1–1========>> n = 1, C(1, 0) = 1, C(1, 1) = 1<br />
    1–2–1======>> n = 2, C(2, 0) = 1, C(2, 1) = 2, C(2, 2) = 1<br />
    1–3–3–1====>> n = 3, C(3, 0) = 1, C(3, 1) = 3, C(3, 2) = 3, C(3, 3)=1<br />
    1–4–6–4–1==>> n = 4, C(4, 0) = 1, C(4, 1) = 4, C(4, 2) = 6, C(4, 3)=4, C(4, 4)=1<br />

*So here every loop on i, builds i’th row of pascal triangle, using (i-1)th row*

