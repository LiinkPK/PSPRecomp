/* Entry 0x0899234C | file offset 0x0018F324 | FUN_0899234c | bytes 108 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089dd3ac. Boundary still requires runtime validation. */

undefined4 FUN_0899234c(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) < 0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (param_2 < 1) {
      param_2 = 1;
    }
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xfffffff3 | 5;
    uVar1 = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(float *)(param_1 + 0x24) = 1.0 / (float)param_2;
  }
  return uVar1;
}

