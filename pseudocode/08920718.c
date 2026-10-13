/* Entry 0x08920718 | file offset 0x0011D6F0 | FUN_08920718 | bytes 56 */

void FUN_08920718(undefined4 *param_1)

{
  if (*(char *)((int)param_1 + 0xd) == '\x02') {
    *param_1 = 1;
  }
  else {
    FUN_08920788();
  }
  return;
}

