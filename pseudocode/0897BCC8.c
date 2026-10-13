/* Entry 0x0897BCC8 | file offset 0x00178CA0 | FUN_0897bcc8 | bytes 280 */

void FUN_0897bcc8(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  fVar1 = *(float *)(param_5 + 0x50) + *(float *)(param_5 + 0x54) * 2.0;
  if (fVar1 == 0.0) {
    fVar1 = 1.0;
  }
  else {
    fVar1 = *(float *)(param_5 + 0x54) / fVar1;
  }
  FUN_089a38e0(auStack_40,param_3 + 0x10,param_3);
  FUN_089a3a44(fVar1,auStack_40,auStack_40);
  FUN_089a38a8(param_1,param_3,auStack_40);
  FUN_089a38e0(param_1 + 0x10,param_3 + 0x10,auStack_40);
  FUN_089a38e0(auStack_30,param_4 + 0x10,param_4);
  FUN_089a3a44(fVar1,auStack_30,auStack_30);
  FUN_089a38a8(param_2,param_4,auStack_30);
  FUN_089a38e0(param_2 + 0x10,param_4 + 0x10,auStack_30);
  return;
}

