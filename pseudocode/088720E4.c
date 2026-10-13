/* Entry 0x088720E4 | file offset 0x0006F0BC | FUN_088720e4 | bytes 84 */

void FUN_088720e4(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  do {
    FUN_08871dac(DAT_089d6008 + iVar1);
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x60;
  } while (iVar2 < 2);
  return;
}

