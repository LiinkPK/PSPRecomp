/* Entry 0x089A0BE4 | file offset 0x0019DBBC | FUN_089a0be4 | bytes 60 */

void FUN_089a0be4(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = DAT_09af6830;
  puVar2 = *(uint **)(DAT_09af6830 + 8);
  *puVar2 = param_1 << 4 | 0x4c000000;
  *(uint **)(iVar1 + 8) = puVar2 + 2;
  puVar2[1] = param_2 << 4 | 0x4d000000;
  return;
}

