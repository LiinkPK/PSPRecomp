/* Entry 0x08819E1C | file offset 0x00016DF4 | FUN_08819e1c | bytes 36 */

bool FUN_08819e1c(char *param_1)

{
  bool bVar1;
  
  if (*param_1 == '\0') {
    bVar1 = false;
  }
  else {
    bVar1 = param_1[1] == '\0';
  }
  return bVar1;
}

