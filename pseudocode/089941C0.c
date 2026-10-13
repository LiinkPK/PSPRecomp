/* Entry 0x089941C0 | file offset 0x00191198 | FUN_089941c0 | bytes 416 */

/* WARNING: Removing unreachable block (ram,0x08994278) */
/* WARNING: Removing unreachable block (ram,0x089942c0) */

undefined4 FUN_089941c0(undefined4 param_1,float param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 local_50;
  char *local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_30;
  int local_28;
  
  uVar5 = FUN_08996958();
  iVar2 = FUN_08998278(param_2);
  if (((iVar2 == 0) && (iVar2 = FUN_08998278(param_1), iVar2 == 0)) && (param_2 == 0.0)) {
    local_50 = 1;
    local_4c = "fmodf";
    local_30 = 0;
    local_48 = FUN_08999d84(param_1);
    local_40 = FUN_08999d84(param_2);
    local_38 = FUN_0899a56c(0,0,0,0);
    iVar2 = FUN_08994390(&local_50);
    if (iVar2 == 0) {
      puVar3 = (undefined4 *)FUN_0899b648();
      *puVar3 = 0x21;
    }
    uVar1 = local_38;
    if (local_30 != 0) {
      local_28 = local_30;
      piVar4 = (int *)FUN_0899b648();
      *piVar4 = local_28;
      uVar1 = local_38;
    }
    local_38._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
    local_38._0_4_ = (undefined4)uVar1;
    uVar5 = FUN_0899aa14((undefined4)local_38,local_38._4_4_);
    local_38 = uVar1;
    return uVar5;
  }
  return uVar5;
}

