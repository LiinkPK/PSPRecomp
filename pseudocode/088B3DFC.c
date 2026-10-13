/* Entry 0x088B3DFC | file offset 0x000B0DD4 | FUN_088b3dfc | bytes 224 */

void FUN_088b3dfc(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_660 [1600];
  
  iVar2 = param_2 + *(char *)(param_2 + 0x763) * 0xc6;
  FUN_088b74a4(iVar2);
  FUN_088b3edc(param_1,param_2,param_3,param_4,param_6);
  uVar1 = FUN_088b5254(param_1,auStack_660,200,param_2,param_3,param_5);
  FUN_088b5670(param_1,iVar2,auStack_660,uVar1,param_2,param_3,param_5,param_4);
  return;
}

