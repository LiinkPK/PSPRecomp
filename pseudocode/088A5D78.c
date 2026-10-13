/* Entry 0x088A5D78 | file offset 0x000A2D50 | FUN_088a5d78 | bytes 244 */

void FUN_088a5d78(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  
  param_1[1] = 0;
  *param_1 = 0;
  local_30 = FUN_08866f34(DAT_089d5ec0);
  local_2c = param_4;
  local_28 = param_5;
  FUN_08974880(FUN_088a5270,FUN_088a52a4,param_2,param_3);
  FUN_0897497c(param_1 + 0x48);
  local_24 = 0;
  iVar1 = FUN_08941350(0x48);
  iVar2 = local_24;
  if (iVar1 != 0) {
    FUN_089405b0(iVar1);
    iVar2 = iVar1;
  }
  param_1[2] = iVar2;
  FUN_08941388(iVar2,&local_30);
  *(undefined1 *)(param_1[2] + 0x34) = 0;
  FUN_088a4c4c(param_6);
  FUN_088a57e4(DAT_089d6d78);
  return;
}

