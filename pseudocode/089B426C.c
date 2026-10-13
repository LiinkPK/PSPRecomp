/* Entry 0x089B426C | file offset 0x001B1244 | FUN_089b426c | bytes 532 */

undefined4
FUN_089b426c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
            char param_6)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *local_220 [3];
  uint local_214;
  int local_210;
  int local_20c;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_40;
  
  if (param_1 == 0) {
    return 0;
  }
  local_40 = param_3;
  FUN_089b2c1c(local_220);
  local_1e8 = *(undefined4 *)(param_1 + 0x3c);
  local_1ec = 0xffffffff;
  local_1f4 = 0;
  local_1f0 = 0;
  local_1e4 = 0;
  local_1e0 = 0;
  local_1dc = 0;
  local_1d8 = 0;
  if ((*(uint *)(param_1 + 0x30) & 0x100) == 0) {
    local_1c8 = *(undefined4 *)(param_1 + 0x4c);
    local_1d0 = 0;
    if ((local_214 & 0x100) != 0) {
LAB_089b4448:
      uVar3 = (uint)*(ushort *)(param_1 + 0x58);
      uVar4 = uVar3;
      goto LAB_089b431c;
    }
    uVar1 = *(ushort *)(param_1 + 0x58);
  }
  else {
    local_1d0 = DAT_09af71a0;
    local_1c8 = *(undefined4 *)(param_1 + 0x4c);
    if ((local_214 & 0x100) != 0) goto LAB_089b4448;
    uVar1 = *(ushort *)(param_1 + 0x58);
  }
  uVar3 = (uint)uVar1;
  uVar4 = 0;
LAB_089b431c:
  local_1cc = 0;
  uVar5 = 0;
  if ((local_214 & 0x200) != 0) {
    uVar5 = (uint)*(ushort *)(param_1 + 0x5a);
  }
  iVar9 = uVar4 + uVar5;
  psVar7 = (short *)(*(int *)(param_1 + 0x54) + (uVar3 - uVar4) * 2);
  local_210 = param_1;
  if (iVar9 != 0) {
    uVar10 = 0xffffffff;
    iVar8 = 0;
    do {
      while( true ) {
        iVar6 = (int)*psVar7;
        local_20c = *(int *)(param_1 + 0xc) + iVar6 * 0x100;
        psVar7 = psVar7 + 1;
        if (param_6 != '\0') break;
        if (iVar6 == param_5) goto LAB_089b43a4;
LAB_089b4360:
        iVar8 = iVar8 + 1;
        if (iVar8 == iVar9) goto LAB_089b43c4;
      }
      iVar2 = FUN_089b2ccc(param_1,iVar6,param_5);
      if (iVar2 == 0) goto LAB_089b4360;
LAB_089b43a4:
      uVar10 = FUN_089b2de8(local_220,param_1,uVar10,iVar6);
      iVar8 = iVar8 + 1;
    } while (iVar8 != iVar9);
  }
LAB_089b43c4:
  *local_220[0] = 0x4a000000;
  local_220[0][1] = 0x4b000000;
  local_220[0][2] = 0x483f8000;
  local_220[0][3] = 0x493f8000;
  local_220[0] = local_220[0] + 4;
  FUN_089b2c5c(local_220,param_2,local_40);
  return 1;
}

