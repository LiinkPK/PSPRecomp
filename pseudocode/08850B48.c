/* Entry 0x08850B48 | file offset 0x0004DB20 | FUN_08850b48 | bytes 20 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089c8c14. Boundary still requires runtime validation. */

bool FUN_08850b48(int param_1)

{
  return (*(uint *)(param_1 + 900) & 0x40000) != 0;
}

