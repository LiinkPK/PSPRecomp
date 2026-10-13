/* Entry 0x0887D68C | file offset 0x0007A664 | FUN_0887d68c | bytes 84 */

void FUN_0887d68c(undefined4 param_1,byte *param_2)

{
  if ((param_2[2] != 0) && (param_2[2] = param_2[2] - 1, param_2[2] == 0)) {
    FUN_0887e7d0(param_2 + 0x1e8);
    *param_2 = *param_2 & 0xfe;
  }
  return;
}

