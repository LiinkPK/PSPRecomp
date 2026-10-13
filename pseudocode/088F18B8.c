/* Entry 0x088F18B8 | file offset 0x000EE890 | FUN_088f18b8 | bytes 136 */

void FUN_088f18b8(undefined2 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_088c4fdc((int)*(short *)(DAT_089d712c + 0x1dee2));
  FUN_08935828(param_1,0xff,0x12);
  if (iVar1 != 0) {
    *param_1 = *(undefined2 *)(iVar1 + 4);
    param_1[1] = *(undefined2 *)(iVar1 + 2);
    param_1[3] = *(undefined2 *)(iVar1 + 6);
    param_1[2] = *(undefined2 *)(iVar1 + 0xc);
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(iVar1 + 0x11);
  }
  return;
}

