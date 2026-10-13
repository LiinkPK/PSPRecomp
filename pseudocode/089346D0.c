/* Entry 0x089346D0 | file offset 0x001316A8 | FUN_089346d0 | bytes 156 */

uint FUN_089346d0(undefined1 *param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  undefined1 *local_8c [2];
  uint local_84;
  undefined2 local_80;
  undefined1 *local_7c;
  uint local_78;
  undefined *local_38;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_80 = 0x208;
  local_38 = PTR_DAT_089d88e4;
  local_8c[0] = param_1;
  local_84 = param_2;
  local_7c = param_1;
  local_78 = param_2;
  local_14 = param_4;
  local_10 = param_5;
  local_c = param_6;
  local_8 = param_7;
  local_4 = param_8;
  uVar1 = FUN_089368f0(local_8c,param_3,&local_14);
  if (uVar1 < param_2) {
    *local_8c[0] = 0;
  }
  else if (param_2 < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

