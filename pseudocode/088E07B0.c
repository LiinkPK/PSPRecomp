/* Entry 0x088E07B0 | file offset 0x000DD788 | FUN_088e07b0 | bytes 100 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_088e07b0(int param_1)

{
  if (*(char *)(param_1 + 0x17b1) != '\0') {
    DAT_09afb89c = 0;
    FUN_088421ec();
    FUN_0885a290(DAT_089d4dc8,*(undefined4 *)(param_1 + 4));
    func_0x08b532fc(_DAT_08b54330,*(undefined4 *)(param_1 + 4),0);
  }
  return;
}

