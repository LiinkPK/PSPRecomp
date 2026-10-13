/* Entry 0x0896C16C | file offset 0x00169144 | FUN_0896c16c | bytes 32 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089dc564. Boundary still requires runtime validation. */

undefined4 FUN_0896c16c(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x4d) == '\0') {
    uVar1 = 3;
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}

