void empty() { }

void simple_arith() {
  (10 - 10/3) << 3 | (23+8*12) & 1024;
}

void simple_arith_with_arg(int d) {
  (d > d/2) || (d >= 100) && (d < 99);
}
