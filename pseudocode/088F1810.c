/* Entry 0x088F1810 | file offset 0x000EE7E8 | FUN_088f1810 | bytes 168 */

void FUN_088f1810(undefined2 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_088c4f74((int)*(short *)(DAT_089d712c + 0x1dee0));
  FUN_08935828(param_1,0xff,0x12);
  if (iVar1 != 0) {
    *param_1 = *(undefined2 *)(iVar1 + 4);
    param_1[1] = *(undefined2 *)(iVar1 + 2);
    param_1[3] = *(undefined2 *)(iVar1 + 6);
    param_1[2] = *(undefined2 *)(iVar1 + 0xc);
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(iVar1 + 0x1c);
    param_1[4] = *(undefined2 *)(iVar1 + 0x14);
    param_1[5] = *(undefined2 *)(iVar1 + 0x16);
    param_1[6] = *(undefined2 *)(iVar1 + 0x18);
    param_1[7] = *(undefined2 *)(iVar1 + 0x1a);
  }
  return;
}

