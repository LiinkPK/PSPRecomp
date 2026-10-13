/* Entry 0x0895A068 | file offset 0x00157040 | FUN_0895a068 | bytes 48 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089dbd74. Boundary still requires runtime validation. */

void FUN_0895a068(float param_1,undefined4 param_2,undefined4 param_3,int param_4,int *param_5,
                 int param_6)

{
  param_1 = *(float *)(param_6 + 0x14) * param_1;
  *(float *)(*param_5 + 4) =
       *(float *)(param_4 + 0x10) +
       ((*(float *)(*param_5 + 4) + param_1) - (*(float *)(param_6 + 0x10) + param_1));
  return;
}

