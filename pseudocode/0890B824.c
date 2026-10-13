/* Entry 0x0890B824 | file offset 0x001087FC | FUN_0890b824 | bytes 248 */

int FUN_0890b824(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_0890b740(param_1,param_4);
  *(undefined **)(param_1 + 4) = &DAT_089cde50;
  FUN_08993560(param_1 + 8,0x10,0x10,FUN_0890b6c4);
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x10c) = param_2;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined1 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x134) = 0;
  iVar3 = 0;
  iVar2 = param_1;
  do {
    uVar1 = FUN_0885c6cc(param_4,param_3,0,0,1,0);
    *(undefined4 *)(iVar2 + 0x10) = uVar1;
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar3 < 0x10);
  return param_1;
}

