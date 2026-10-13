/* Entry 0x088A26F8 | file offset 0x0009F6D0 | FUN_088a26f8 | bytes 136 */

void FUN_088a26f8(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    iVar1 = DAT_09b4cf98;
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 0x58);
    }
    iVar2 = iVar1;
    if (iVar2 == 0) break;
    if ((*(int *)(iVar2 + 0x54) == param_1) && (FUN_088a1e44(iVar2,1), param_2 == '\x01')) {
      *(undefined4 *)(iVar2 + 0x54) = 0;
    }
  }
  return;
}

