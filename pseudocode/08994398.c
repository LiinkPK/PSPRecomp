/* Entry 0x08994398 | file offset 0x00191370 | FUN_08994398 | bytes 676 */

undefined8 FUN_08994398(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  uint local_1c;
  
  uVar6 = CONCAT44(param_2,param_1);
  uVar1 = (int)param_2 >> 0x14 & 0x7ff;
  uVar2 = uVar1 - 0x3ff;
  uVar3 = (int)param_2 >> 0x1f & 1;
  local_1c = param_2;
  if ((int)uVar2 < 0x14) {
    if ((int)uVar2 < 0) {
      if ((param_2 & 0x7fffffff) != 0 || param_1 != 0) {
        uVar2 = param_1 | param_2 & 0xfffff;
        uVar5 = *(undefined4 *)(&DAT_089d0d54 + uVar3 * 8);
        uVar4 = *(undefined4 *)(&DAT_089d0d50 + uVar3 * 8);
        uVar6 = FUN_0899a118(uVar4,uVar5,param_1,
                             param_2 & 0xfffe0000 | (uVar2 | -uVar2) >> 0xc & 0x80000);
        uVar6 = FUN_0899a180((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar4,uVar5);
        return CONCAT44((uint)((ulonglong)uVar6 >> 0x20) & 0x7fffffff |
                        ((int)param_2 >> 0x1f) << 0x1f,(int)uVar6);
      }
    }
    else {
      uVar1 = 0xfffff >> (uVar2 & 0x1f);
      if ((param_2 & uVar1) != 0 || param_1 != 0) {
        uVar1 = uVar1 >> 1;
        uVar5 = *(undefined4 *)(&DAT_089d0d54 + uVar3 * 8);
        uVar4 = *(undefined4 *)(&DAT_089d0d50 + uVar3 * 8);
        if ((param_2 & uVar1) != 0 || param_1 != 0) {
          if (uVar2 == 0x13) {
            param_1 = 0x40000000;
          }
          else {
            local_1c = param_2 & ~uVar1 | 0x20000 >> (uVar2 & 0x1f);
          }
        }
        goto LAB_089945f4;
      }
    }
  }
  else {
    if (0x33 < (int)uVar2) {
      if (uVar2 == 0x400) {
        uVar6 = FUN_0899a118(param_1,param_2,param_1,param_2);
      }
      return uVar6;
    }
    uVar1 = uVar1 - 0x413;
    uVar2 = 0xffffffff >> (uVar1 & 0x1f);
    if ((param_1 & uVar2) != 0) {
      uVar2 = uVar2 >> 1;
      uVar5 = *(undefined4 *)(&DAT_089d0d54 + uVar3 * 8);
      uVar4 = *(undefined4 *)(&DAT_089d0d50 + uVar3 * 8);
      if ((param_1 & uVar2) != 0) {
        param_1 = param_1 & ~uVar2 | 0x40000000 >> (uVar1 & 0x1f);
      }
LAB_089945f4:
      uVar6 = FUN_0899a118(uVar4,uVar5,param_1,local_1c);
      uVar6 = FUN_0899a180((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar4,uVar5);
      return uVar6;
    }
  }
  return CONCAT44(param_2,param_1);
}

