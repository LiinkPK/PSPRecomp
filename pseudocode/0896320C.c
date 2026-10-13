/* Entry 0x0896320C | file offset 0x001601E4 | FUN_0896320c | bytes 140 */

bool FUN_0896320c(undefined4 param_1,int param_2,undefined4 param_3,int *param_4)

{
  float *pfVar1;
  int iVar2;
  int local_10;
  int *local_c;
  int local_8;
  
  local_c = param_4;
  local_8 = param_2;
  pfVar1 = (float *)FUN_08971134(*(undefined4 *)(param_2 + 0x18),8,&local_10,1);
  if (pfVar1 != (float *)0x0) {
    iVar2 = local_8 + (uint)*(ushort *)(*(int *)(*(int *)(local_8 + 0x88) + 0x1c8) + 0x18) * 4;
    *(int *)(iVar2 + 0xb4) = *(int *)(iVar2 + 0xb4) + local_10;
  }
  *local_c = (int)pfVar1;
  if (pfVar1 != (float *)0x0) {
    pfVar1[1] = 0.0;
    *pfVar1 = -*(float *)(*(int *)(local_8 + 0x88) + 0x160);
  }
  return pfVar1 != (float *)0x0;
}

