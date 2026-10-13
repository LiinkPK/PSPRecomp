/* Entry 0x0899A56C | file offset 0x00197544 | FUN_0899a56c | bytes 548 */

void FUN_0899a56c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_70;
  uint local_6c;
  int local_68;
  uint local_60;
  uint local_5c;
  uint local_50;
  uint local_4c;
  int local_48;
  uint local_40;
  uint local_3c;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_30 = param_1;
  local_2c = param_2;
  local_20 = param_3;
  local_1c = param_4;
  FUN_0899afc0(&local_30,&local_70);
  FUN_0899afc0(&local_20,&local_50);
  puVar2 = &local_70;
  uVar3 = local_60;
  uVar6 = local_5c;
  if ((local_70 < 2) || (puVar2 = &local_50, local_50 < 2)) goto LAB_0899a604;
  local_6c = local_6c ^ local_4c;
  if ((local_70 == 4) || (local_70 == 2)) {
    puVar2 = (uint *)&DAT_089d11e0;
    if (local_70 != local_50) {
      puVar2 = &local_70;
    }
    goto LAB_0899a604;
  }
  if (local_50 == 4) {
    local_60 = 0;
    local_5c = 0;
    local_68 = 0;
    puVar2 = &local_70;
    uVar3 = local_60;
    uVar6 = local_5c;
    goto LAB_0899a604;
  }
  if (local_50 == 2) {
    local_70 = 4;
    puVar2 = &local_70;
    goto LAB_0899a604;
  }
  local_68 = local_68 - local_48;
  if (local_5c < local_3c) {
LAB_0899a770:
    local_68 = local_68 + -1;
    local_5c = local_5c << 1 | local_60 >> 0x1f;
    local_60 = local_60 << 1;
    bVar1 = local_5c < local_3c;
  }
  else {
    bVar1 = false;
    if ((local_3c == local_5c) && (local_60 < local_40)) goto LAB_0899a770;
  }
  uVar4 = 0x10000000;
  uVar3 = 0;
  uVar5 = 0;
  uVar6 = 0;
  do {
    if ((!bVar1) && ((local_3c != local_5c || (local_40 <= local_60)))) {
      bVar1 = local_60 < local_40;
      local_60 = local_60 - local_40;
      local_5c = (local_5c - local_3c) - (uint)bVar1;
      uVar5 = uVar5 | uVar3;
      uVar6 = uVar6 | uVar4;
    }
    uVar3 = uVar3 >> 1 | uVar4 << 0x1f;
    uVar4 = uVar4 >> 1;
    local_5c = local_5c << 1 | local_60 >> 0x1f;
    local_60 = local_60 << 1;
    bVar1 = local_5c < local_3c;
  } while (uVar3 != 0 || uVar4 != 0);
  puVar2 = &local_70;
  uVar3 = uVar5;
  if (((uVar5 & 0xff) == 0x80) &&
     (((uVar5 & 0x100) != 0 || (puVar2 = &local_70, local_60 != 0 || local_5c != 0)))) {
    puVar2 = &local_70;
    uVar3 = uVar5 + 0x80;
    uVar6 = uVar6 + (uVar5 + 0x80 < 0x80);
  }
LAB_0899a604:
  local_5c = uVar6;
  local_60 = uVar3;
  FUN_0899ad20(puVar2);
  return;
}

