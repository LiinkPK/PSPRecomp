/* Entry 0x08928F3C | file offset 0x00125F14 | FUN_08928f3c | bytes 60 */

void FUN_08928f3c(undefined4 *param_1,int param_2)

{
  undefined4 local_10;
  
  local_10 = 0xffffffff;
  if (*(char *)(param_2 + 0xe) == '\x02') {
    local_10 = 0;
  }
  *param_1 = local_10;
  param_1[1] = 0xffffffff;
  return;
}

