/* Entry 0x0895AA80 | file offset 0x00157A58 | FUN_0895aa80 | bytes 152 */

void FUN_0895aa80(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  puVar2 = (undefined4 *)*param_4;
  FUN_0895aca4(puVar2,param_3);
  uVar1 = DAT_09b6f470;
  local_20 = *puVar2;
  local_1c = puVar2[1];
  local_18 = puVar2[2];
  local_14 = puVar2[3];
  FUN_0896f320(DAT_09b6f470,&local_20,&local_20,0);
  FUN_0896f5c0((float)puVar2[0x10] * 0.001953125,uVar1);
  return;
}

