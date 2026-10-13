/* Entry 0x089B4480 | file offset 0x001B1458 | FUN_089b4480 | bytes 616 */

undefined4
FUN_089b4480(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,short *param_5,
            int param_6,int param_7)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *local_200 [3];
  uint local_1f4;
  int local_1f0;
  int local_1ec;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  uint local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  
  if (param_1 == 0) {
    return 0;
  }
  FUN_089b2c1c(local_200);
  uVar4 = *(uint *)(param_1 + 0x3c);
  if ((local_1f4 & 2) == 0) {
    uVar4 = *(uint *)(param_1 + 0x3c) & 0xfff0ffff;
  }
  if ((local_1f4 & 4) == 0) {
    uVar3 = *(uint *)(param_1 + 0x30);
    local_1c8 = uVar4 & 0xf00f0000;
    if ((local_1f4 & 8) == 0) {
      local_1c8 = uVar4 & 0x700f0000;
    }
    if ((local_1f4 & 1) == 0) {
      local_1c8 = local_1c8 & 0xbfffffff;
    }
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x30);
    if ((local_1f4 & 8) == 0) {
      uVar4 = uVar4 & 0x7fffffff;
    }
    local_1c8 = uVar4;
    if ((local_1f4 & 1) == 0) {
      local_1c8 = uVar4 & 0xbfffffff;
    }
  }
  if ((uVar3 & 0x100) == 0) {
    local_1a8 = *(undefined4 *)(param_1 + 0x4c);
    local_1b0 = 0;
  }
  else {
    local_1a8 = *(undefined4 *)(param_1 + 0x4c);
    local_1b0 = DAT_09af71a0;
  }
  if (param_5 == (short *)0x0) {
    uVar4 = (uint)*(ushort *)(param_1 + 0x58);
    if ((local_1f4 & 0x100) == 0) {
      uVar4 = 0;
    }
    uVar3 = 0;
    if ((local_1f4 & 0x200) != 0) {
      uVar3 = (uint)*(ushort *)(param_1 + 0x5a);
    }
    param_5 = (short *)(*(int *)(param_1 + 0x54) + (*(ushort *)(param_1 + 0x58) - uVar4) * 2);
    param_6 = uVar4 + uVar3;
    param_7 = 2;
  }
  else if (param_7 == 0) {
    param_7 = 2;
  }
  local_1ac = 0;
  local_1b8 = 0;
  local_1bc = 0;
  local_1c0 = 0;
  local_1c4 = 0;
  local_1cc = 0xffffffff;
  local_1d0 = 0;
  local_1d4 = 0;
  uVar2 = 0xffffffff;
  local_1f0 = param_1;
  if (0 < param_6) {
    iVar5 = 0;
    sVar1 = *param_5;
    while( true ) {
      local_1ec = *(int *)(param_1 + 0xc) + sVar1 * 0x100;
      iVar5 = iVar5 + 1;
      param_5 = (short *)((int)param_5 + param_7);
      uVar2 = FUN_089b2de8(local_200,param_1,uVar2);
      if (param_6 == iVar5) break;
      sVar1 = *param_5;
    }
  }
  *local_200[0] = 0x4a000000;
  local_200[0][1] = 0x4b000000;
  local_200[0][2] = 0x483f8000;
  local_200[0][3] = 0x493f8000;
  local_200[0] = local_200[0] + 4;
  uVar2 = FUN_089b2c5c(local_200,param_2,param_3);
  return uVar2;
}

