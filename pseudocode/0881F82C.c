/* Entry 0x0881F82C | file offset 0x0001C804 | FUN_0881f82c | bytes 44 */

bool FUN_0881f82c(short *param_1)

{
  bool bVar1;
  
  if (*param_1 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = param_1[1] != 0;
  }
  return bVar1;
}

