/* Entry 0x088FC628 | file offset 0x000F9600 | FUN_088fc628 | bytes 92 */

void FUN_088fc628(int param_1,undefined2 param_2,ushort param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x30);
  iVar3 = 0;
  iVar2 = 0;
  do {
    if (*(short *)(iVar1 + 0x592) == -1) {
      *(undefined2 *)(iVar1 + 0x592) = param_2;
      *(ushort *)(*(int *)(param_1 + 0x30) + iVar2 + 0x594) = param_3 & 3;
      return;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
    iVar1 = iVar1 + 4;
  } while (iVar3 < 0x32);
  return;
}

