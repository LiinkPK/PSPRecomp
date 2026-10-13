/* Entry 0x088A2104 | file offset 0x0009F0DC | FUN_088a2104 | bytes 88 */

void FUN_088a2104(uint param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = DAT_089d6c90;
  bVar1 = false;
  if ((DAT_089d6c90 <= param_1) && (bVar1 = false, param_1 < DAT_089d6c90 + 0x1700)) {
    bVar1 = true;
  }
  if (bVar1) {
    iVar3 = *(int *)(DAT_089d6c90 + 0x1800);
    *(int *)(DAT_089d6c90 + 0x1800) = iVar3 + 1;
    *(uint *)(uVar2 + iVar3 * 4 + 0x1700) = param_1;
  }
  return;
}

