/* Entry 0x0885C3BC | file offset 0x00059394 | FUN_0885c3bc | bytes 72 */

bool FUN_0885c3bc(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  
  bVar1 = DAT_089d4e18 < 0x10;
  if (bVar1) {
    (&DAT_09b17d28)[DAT_089d4e18 * 2] = param_1;
    (&DAT_09b17d2c)[DAT_089d4e18 * 2] = param_2;
    DAT_089d4e18 = DAT_089d4e18 + 1;
  }
  return bVar1;
}

