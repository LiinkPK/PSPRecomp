/* Entry 0x088A20CC | file offset 0x0009F0A4 | FUN_088a20cc | bytes 56 */

undefined4 FUN_088a20cc(void)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_089d6c90 + 0x1800) + -1;
  if (*(int *)(DAT_089d6c90 + 0x1800) < 1) {
    uVar1 = 0;
  }
  else {
    *(int *)(DAT_089d6c90 + 0x1800) = iVar2;
    uVar1 = *(undefined4 *)(DAT_089d6c90 + iVar2 * 4 + 0x1700);
  }
  return uVar1;
}

