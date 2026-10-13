/* Entry 0x0884EDE4 | file offset 0x0004BDBC | FUN_0884ede4 | bytes 252 */

void FUN_0884ede4(int param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_08850a40(param_2);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 8);
    if ((*(ushort *)(iVar1 + 6) & 0x20) != 0) {
      *(undefined1 *)(param_1 + 0x18) = 0;
    }
    if (0 < *(short *)(iVar1 + 0x1c)) {
      FUN_0882fa10(0,0,iVar2 + 0x130,(int)*(short *)(iVar1 + 0x1c),0);
      iVar1 = *(int *)(param_1 + 4);
      iVar2 = *(int *)(param_1 + 8);
    }
    if (-1 < *(short *)(iVar1 + 0x22)) {
      FUN_088a9de8(*(undefined4 *)(*(int *)(iVar2 + 0x390) + 0x5c),(int)*(short *)(iVar1 + 0x22),
                   iVar2 + 0x4c8,0,0);
      iVar2 = *(int *)(param_1 + 8);
    }
    *(undefined2 *)(param_1 + 0x14) = param_3;
    *(undefined2 *)(param_1 + 0x16) = param_4;
    FUN_08834df4(0x3f800000,iVar2);
    FUN_0884edd0(param_1);
  }
  return;
}

