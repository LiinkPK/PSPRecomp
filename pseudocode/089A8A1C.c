/* Entry 0x089A8A1C | file offset 0x001A59F4 | FUN_089a8a1c | bytes 248 */

void FUN_089a8a1c(int param_1,undefined4 param_2,ushort param_3,int param_4,ushort param_5)

{
  ushort uVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  
  puVar2 = (undefined2 *)FUN_089a74b4();
  *puVar2 = (short)param_2;
  puVar2[1] = param_3;
  *(int *)(puVar2 + 2) = param_4;
  *(uint *)(puVar2 + 4) = param_4 * (uint)param_3 * (uint)(param_5 >> 3);
  puVar2[7] = param_5;
  puVar2[6] = param_3 * (param_5 >> 3);
  puVar3 = (undefined4 *)FUN_089a74a4(param_1);
  puVar3[1] = param_2;
  *puVar3 = 0x73647561;
  puVar3[5] = 1;
  uVar5 = *(undefined4 *)(puVar2 + 2);
  puVar3[8] = 0;
  puVar3[6] = uVar5;
  iVar4 = *(int *)(puVar2 + 4);
  uVar1 = puVar2[6];
  puVar3[10] = 0;
  puVar3[0xb] = (uint)uVar1;
  puVar3[9] = iVar4 << 1;
  *(undefined2 *)(param_1 + 0x1b0) = 4;
  *(undefined4 *)(param_1 + 0x1b8) = 0x62773130;
  *(undefined2 *)(param_1 + 0x1b2) = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  return;
}

