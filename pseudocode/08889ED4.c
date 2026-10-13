/* Entry 0x08889ED4 | file offset 0x00086EAC | FUN_08889ed4 | bytes 40 */

void FUN_08889ed4(int param_1,undefined4 param_2,undefined1 param_3)

{
  *(undefined4 *)(DAT_089d6a10 + param_1 * 4 + 0x744) = param_2;
  *(undefined1 *)(DAT_089d6a10 + param_1 + 0x750) = param_3;
  return;
}

