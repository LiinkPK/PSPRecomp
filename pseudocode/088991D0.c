/* Entry 0x088991D0 | file offset 0x000961A8 | FUN_088991d0 | bytes 112 */

int FUN_088991d0(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_08897244(param_1);
  FUN_08993560(param_1 + 0x108,1,0x108,FUN_08897244);
  *(undefined1 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x210) = 0xffffffff;
  iVar2 = 0;
  iVar1 = param_1;
  do {
    *(undefined1 *)(iVar1 + 0x20c) = 1;
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x108;
  } while (iVar2 < 1);
  return param_1;
}

