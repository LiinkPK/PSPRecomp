/* Entry 0x0899A8C8 | file offset 0x001978A0 | FUN_0899a8c8 | bytes 212 */

uint FUN_0899a8c8(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  uint local_40;
  int local_3c;
  int local_38;
  uint local_30;
  uint local_2c;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_20 = param_1;
  local_1c = param_2;
  FUN_0899afc0(&local_20,&local_40);
  if (local_40 == 2) {
    return 0;
  }
  if (local_40 < 2) {
    return 0;
  }
  if (local_40 != 4) {
    if (local_38 < 0) {
      return 0;
    }
    if (local_38 < 0x1f) {
      uVar1 = 0x3c - local_38;
      if ((int)(uVar1 * 0x4000000) < 0) {
        local_30 = local_2c >> (uVar1 & 0x1f);
      }
      else {
        local_30 = local_30 >> (uVar1 & 0x1f);
        if (uVar1 * 0x4000000 != 0) {
          local_30 = local_30 | local_2c << (-uVar1 & 0x1f);
        }
      }
      if (local_3c != 0) {
        return -local_30;
      }
      return local_30;
    }
  }
  uVar1 = 0x80000000;
  if (local_3c == 0) {
    uVar1 = 0x7fffffff;
  }
  return uVar1;
}

