/* Entry 0x08913810 | file offset 0x001107E8 | FUN_08913810 | bytes 92 */

void FUN_08913810(int param_1)

{
  if (*(char *)(param_1 + 0x7d7) != '\0') {
    FUN_088d6dbc(param_1 + 0xa0);
    FUN_088de378(param_1 + 0x31c);
    FUN_088cd4c8(param_1 + 0x3c0);
    FUN_0892f5ac(param_1 + 0x418);
    FUN_088ce3d8(param_1 + 0x404);
    *(undefined1 *)(param_1 + 0x7d7) = 0;
  }
  return;
}

