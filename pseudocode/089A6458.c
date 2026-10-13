/* Entry 0x089A6458 | file offset 0x001A3430 | FUN_089a6458 | bytes 160 */

undefined4 FUN_089a6458(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  
  puVar3 = *(undefined1 **)(param_1 + 0x200);
  uVar2 = *(uint *)(param_1 + 0x208);
  uVar1 = 0x80650201;
  if (puVar3 < *(undefined1 **)(param_1 + 0x204)) {
    *puVar3 = (char)(uVar2 >> 0x18);
    if (uVar2 >> 0x18 == 0xff) {
      puVar3[1] = 0;
      puVar3 = puVar3 + 1;
    }
    puVar3[1] = (char)(uVar2 >> 0x10);
    if ((uVar2 & 0xffffff) >> 0x10 == 0xff) {
      puVar3[2] = 0;
      puVar3 = puVar3 + 1;
    }
    puVar3[2] = (char)(uVar2 >> 8);
    if ((uVar2 & 0xffff) >> 8 == 0xff) {
      puVar3[3] = 0;
      puVar3 = puVar3 + 1;
    }
    puVar3[3] = (char)uVar2;
    if ((uVar2 & 0xff) == 0xff) {
      puVar3[4] = 0;
      puVar3 = puVar3 + 1;
    }
    uVar1 = 0;
    *(undefined1 **)(param_1 + 0x200) = puVar3 + (*(char *)(param_1 + 0x20c) + 0x27 >> 3);
  }
  return uVar1;
}

