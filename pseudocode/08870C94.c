/* Entry 0x08870C94 | file offset 0x0006DC6C | FUN_08870c94 | bytes 120 */

bool FUN_08870c94(undefined4 param_1,int param_2)

{
  float fVar1;
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [12];
  
  FUN_0885f644(auStack_30,param_2,param_1);
  FUN_089a3528(auStack_24,auStack_30,param_2);
  fVar1 = (float)FUN_089a3718(auStack_24,auStack_24);
  return fVar1 <= *(float *)(param_2 + 0xc) * *(float *)(param_2 + 0xc);
}

