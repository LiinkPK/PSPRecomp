/* Entry 0x088FFD08 | file offset 0x000FCCE0 | FUN_088ffd08 | bytes 152 */

void FUN_088ffd08(int param_1)

{
  *(short *)(DAT_089d8128 + 0x3e0a) = *(short *)(DAT_089d8128 + 0x3e0a) - (short)param_1;
  *(int *)(DAT_089d8128 + 0x3e10) = *(int *)(DAT_089d8128 + 0x3e10) - param_1;
  *(int *)(DAT_089d8128 + 0x3e0c) = *(int *)(DAT_089d8128 + 0x3e0c) - param_1;
  FUN_08935564(DAT_089d8128,DAT_089d8128 + param_1 * 4,*(int *)(DAT_089d8128 + 0x3e10) * 4);
  FUN_08935828(DAT_089d8128 + *(int *)(DAT_089d8128 + 0x3e10) * 4,0,param_1 * 4);
  return;
}

