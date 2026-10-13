/* Entry 0x0891F9C8 | file offset 0x0011C9A0 | FUN_0891f9c8 | bytes 308 */

int FUN_0891f9c8(int *param_1,undefined2 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined2 local_c0 [70];
  undefined2 local_34 [10];
  undefined1 local_20;
  undefined1 local_1f;
  
  iVar7 = 0;
  FUN_0891f5a4(local_c0);
  iVar2 = *param_1;
  if (iVar2 < 1) {
    if (-1 < iVar2) {
      piVar3 = (int *)param_1[2];
      local_20 = 0;
      local_c0[0] = param_2;
      iVar7 = FUN_0891f444(piVar3 + 1,piVar3 + *piVar3 * 0x23 + 1,local_c0,0);
    }
  }
  else if (iVar2 < 2) {
    piVar3 = (int *)param_1[3];
    local_1f = 0;
    local_34[0] = param_2;
    puVar1 = (undefined4 *)FUN_0891f4f8(piVar3 + 0x24,piVar3 + *piVar3 * 5 + 0x24,local_34,0);
    if (puVar1 != (undefined4 *)0x0) {
      FUN_0891f5cc(param_1[3] + 4);
      iVar7 = param_1[3];
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar8 = puVar1[4];
      *(undefined4 *)(iVar7 + 4) = *puVar1;
      uVar4 = puVar1[3];
      *(undefined4 *)(iVar7 + 8) = uVar5;
      *(undefined4 *)(iVar7 + 0xc) = uVar6;
      *(undefined4 *)(iVar7 + 0x10) = uVar4;
      *(undefined4 *)(iVar7 + 0x14) = uVar8;
      iVar7 = param_1[3] + 4;
    }
  }
  return iVar7;
}

