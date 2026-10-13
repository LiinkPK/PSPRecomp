/* Entry 0x088BA54C | file offset 0x000B7524 | FUN_088ba54c | bytes 288 */

int FUN_088ba54c(int param_1,int param_2,int param_3,short param_4,short param_5,undefined4 param_6)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  short local_30 [2];
  
  if (param_4 != -1) {
    iVar3 = param_2 + param_3 * 2;
    local_30[0] = param_4;
    iVar1 = FUN_088ba66c(param_2,iVar3,local_30);
    if (iVar1 == iVar3) {
      iVar1 = FUN_088b8414(param_6,(int)local_30[0],1);
      if ((iVar1 != 0) && ((*(ushort *)(iVar1 + 4) & 2) == 0)) {
        psVar2 = (short *)(param_1 + param_3 * 4);
        *psVar2 = local_30[0];
        psVar2[1] = *(short *)(iVar1 + 2) + param_5;
        *(short *)(param_2 + param_3 * 2) = local_30[0];
        param_3 = param_3 + 1;
      }
    }
    else {
      param_1 = param_1 + ((iVar1 - param_2) / 2) * 4;
      *(short *)(param_1 + 2) = *(short *)(param_1 + 2) + param_5;
    }
  }
  return param_3;
}

