/* Entry 0x089938A0 | file offset 0x00190878 | FUN_089938a0 | bytes 1936 */

/* WARNING: Removing unreachable block (ram,0x08993c90) */
/* WARNING: Removing unreachable block (ram,0x08993cc4) */
/* WARNING: Removing unreachable block (ram,0x08993b64) */
/* WARNING: Removing unreachable block (ram,0x08993a94) */
/* WARNING: Removing unreachable block (ram,0x08993a9c) */
/* WARNING: Removing unreachable block (ram,0x08993aa4) */
/* WARNING: Removing unreachable block (ram,0x08993e80) */
/* WARNING: Removing unreachable block (ram,0x08993d88) */
/* WARNING: Removing unreachable block (ram,0x08993dc0) */
/* WARNING: Removing unreachable block (ram,0x08993dec) */
/* WARNING: Removing unreachable block (ram,0x08993f78) */
/* WARNING: Removing unreachable block (ram,0x08993988) */
/* WARNING: Removing unreachable block (ram,0x089938f4) */
/* WARNING: Removing unreachable block (ram,0x08993b94) */
/* WARNING: Removing unreachable block (ram,0x08993abc) */

undefined8 FUN_089938a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 local_60;
  undefined *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  int local_40;
  undefined8 local_38;
  int local_30;
  
  local_38 = FUN_0899463c();
  iVar1 = FUN_08998234(param_3,param_4);
  if (iVar1 == 0) {
    iVar1 = FUN_08998234(param_1,param_2);
    local_58 = param_1;
    local_54 = param_2;
    local_50 = param_3;
    local_4c = param_4;
    if (iVar1 == 0) {
      iVar1 = FUN_0899a790(param_1,param_2,0,0);
      if (iVar1 == 0) {
        iVar1 = FUN_0899a790(param_3,param_4,0,0);
        if (iVar1 == 0) {
          return 0x3ff0000000000000;
        }
        iVar1 = FUN_08994360(param_3,param_4);
        if (iVar1 != 0) {
          iVar1 = FUN_0899a790(param_3,param_4,0,0);
          if (iVar1 < 0) {
            local_60 = 1;
            local_5c = &DAT_089d0cf8;
            local_40 = 0;
            local_48 = FUN_0899a99c(0,0x7ff00000);
            iVar1 = FUN_08994390(&local_60);
            if (iVar1 == 0) {
              puVar2 = (undefined4 *)FUN_0899b648();
              *puVar2 = 0x21;
            }
            if (local_40 != 0) {
              local_30 = local_40;
              piVar3 = (int *)FUN_0899b648();
              *piVar3 = local_30;
            }
            return local_48;
          }
        }
      }
      else {
        iVar1 = FUN_08994360((undefined4)local_38,local_38._4_4_);
        uVar5 = local_38;
        if (iVar1 == 0) {
          iVar1 = FUN_08994360(param_1,param_2);
          uVar5 = local_38;
          if (iVar1 != 0) {
            iVar1 = FUN_08994360(param_3,param_4);
            uVar5 = local_38;
            if (iVar1 != 0) {
              iVar1 = FUN_08998234((undefined4)local_38,local_38._4_4_);
              if (iVar1 != 0) {
                local_60 = 1;
                local_5c = &DAT_089d0cf8;
                local_40 = 0;
                local_48 = FUN_0899a56c(0,0,0,0);
                iVar1 = FUN_08994390(&local_60);
                if (iVar1 == 0) {
                  puVar2 = (undefined4 *)FUN_0899b648();
                  *puVar2 = 0x21;
                }
                if (local_40 != 0) {
                  local_30 = local_40;
                  piVar3 = (int *)FUN_0899b648();
                  *piVar3 = local_30;
                }
                return local_48;
              }
              local_60 = 3;
              local_5c = &DAT_089d0cf8;
              local_40 = 0;
              uVar5 = FUN_0899a1f4(param_3,param_4,0,0x3fe00000);
              uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
              local_48._4_4_ = 0x7ff00000;
              local_48._0_4_ = 0;
              iVar1 = FUN_0899a790(param_1,param_2,0,0);
              if (iVar1 < 0) {
                uVar6 = FUN_08994398((int)uVar5,uVar4);
                iVar1 = FUN_0899a790((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),(int)uVar5,uVar4);
                if (iVar1 != 0) {
                  local_48 = FUN_0899a99c(0,0x7ff00000);
                }
              }
              iVar1 = FUN_08994390(&local_60);
              if (iVar1 == 0) {
                puVar2 = (undefined4 *)FUN_0899b648();
                *puVar2 = 0x22;
              }
              if (local_40 != 0) {
                local_30 = local_40;
                piVar3 = (int *)FUN_0899b648();
                *piVar3 = local_30;
              }
              return local_48;
            }
          }
        }
        local_38._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
        local_38._0_4_ = (undefined4)uVar5;
        iVar1 = FUN_0899a790((undefined4)local_38,local_38._4_4_,0,0);
        local_38 = uVar5;
        if (iVar1 == 0) {
          iVar1 = FUN_08994360(param_1,param_2);
          if (iVar1 != 0) {
            iVar1 = FUN_08994360(param_3,param_4);
            if (iVar1 != 0) {
              local_60 = 4;
              local_5c = &DAT_089d0cf8;
              local_40 = 0;
              local_48._4_4_ = 0;
              local_48._0_4_ = 0;
              iVar1 = FUN_08994390(&local_60);
              if (iVar1 == 0) {
                puVar2 = (undefined4 *)FUN_0899b648();
                *puVar2 = 0x22;
              }
              if (local_40 != 0) {
                local_30 = local_40;
                piVar3 = (int *)FUN_0899b648();
                *piVar3 = local_30;
              }
              return CONCAT44(local_48._4_4_,(undefined4)local_48);
            }
          }
        }
      }
    }
    else {
      iVar1 = FUN_0899a790(param_3,param_4,0,0);
      if (iVar1 == 0) {
        local_60 = 1;
        local_5c = &DAT_089d0cf8;
        local_40 = 0;
        local_48._0_4_ = param_1;
        local_48._4_4_ = param_2;
        iVar1 = FUN_08994390(&local_60);
        if (iVar1 == 0) {
          puVar2 = (undefined4 *)FUN_0899b648();
          *puVar2 = 0x21;
        }
        if (local_40 != 0) {
          local_30 = local_40;
          piVar3 = (int *)FUN_0899b648();
          *piVar3 = local_30;
        }
        return CONCAT44(local_48._4_4_,(undefined4)local_48);
      }
    }
  }
  return local_38;
}

