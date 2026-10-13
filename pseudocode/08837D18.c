/* Entry 0x08837D18 | file offset 0x00034CF0 | FUN_08837d18 | bytes 312 */

bool FUN_08837d18(int param_1,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  puVar4 = *(uint **)(*(int *)(param_1 + 0x390) + 0x18);
  if (puVar4 == (uint *)0x0) {
    bVar1 = false;
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x45c);
    uVar5 = *(uint *)(param_1 + 0x458);
    uVar7 = FUN_089985b0(1,0,param_2);
    uVar3 = (uint)((ulonglong)uVar7 >> 0x20);
    uVar2 = (uint)uVar7;
    if ((uVar6 & uVar3) == 0 && (uVar5 & uVar2) == 0) {
      if ((*(uint *)(param_1 + 0x464) & uVar3) == 0 && (*(uint *)(param_1 + 0x460) & uVar2) == 0) {
        if ((*(uint *)(param_1 + 0x44c) & uVar3) == 0 && (*(uint *)(param_1 + 0x448) & uVar2) == 0)
        {
          if ((*(uint *)(param_1 + 0x454) & uVar3) == 0 && (*(uint *)(param_1 + 0x450) & uVar2) == 0
             ) {
            bVar1 = (puVar4[1] & uVar3) != 0 || (*puVar4 & uVar2) != 0;
          }
          else {
            bVar1 = false;
          }
        }
        else {
          bVar1 = true;
        }
      }
      else {
        bVar1 = false;
      }
    }
    else {
      bVar1 = true;
    }
  }
  return bVar1;
}

