/* Entry 0x0899C498 | file offset 0x00199470 | FUN_0899c498 | bytes 60 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089d1368. Boundary still requires runtime validation. */

void FUN_0899c498(float param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  ushort uVar1;
  
  if (param_4 != 0) {
    uVar1 = *(ushort *)(param_4 + 10);
    *(uint *)(param_5 + 4) = *(uint *)(param_5 + 4) | 0x20;
    *(float *)(param_5 + 0x2c) = param_1 / (float)(1 << (-LZCOUNT(uVar1 - 1) & 0x1fU));
  }
  return;
}

