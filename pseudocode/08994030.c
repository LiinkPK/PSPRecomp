/* Entry 0x08994030 | file offset 0x00191008 | FUN_08994030 | bytes 400 */

/* WARNING: Removing unreachable block (ram,0x089940e0) */
/* WARNING: Removing unreachable block (ram,0x08994118) */

undefined4 FUN_08994030(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 local_50;
  undefined *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  int local_30;
  int local_28;
  
  uVar1 = FUN_08996674();
  iVar2 = FUN_08998234(param_1,param_2);
  if ((iVar2 == 0) && (iVar2 = FUN_0899a790(param_1,param_2,0,0), iVar2 < 0)) {
    local_50 = 1;
    local_4c = &DAT_089d0d28;
    local_30 = 0;
    local_48 = param_1;
    local_44 = param_2;
    local_40 = param_1;
    local_3c = param_2;
    local_38 = FUN_0899a56c(0,0,0,0);
    iVar2 = FUN_08994390(&local_50);
    if (iVar2 == 0) {
      puVar3 = (undefined4 *)FUN_0899b648();
      *puVar3 = 0x21;
    }
    if (local_30 != 0) {
      local_28 = local_30;
      piVar4 = (int *)FUN_0899b648();
      *piVar4 = local_28;
    }
    return (undefined4)local_38;
  }
  return uVar1;
}

