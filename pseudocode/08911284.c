/* Entry 0x08911284 | file offset 0x0010E25C | FUN_08911284 | bytes 228 */

void FUN_08911284(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 0;
  puVar1 = param_1;
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 2);
  iVar2 = 0;
  puVar3 = param_1 + 2;
  puVar1 = param_1;
  do {
    (**(code **)(puVar1[6] + 0xc))((int)puVar3 + (int)*(short *)(puVar1[6] + 8));
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 5;
    puVar3 = puVar3 + 5;
  } while (iVar2 < 8);
  iVar2 = 0;
  puVar3 = param_1 + 0x2a;
  puVar1 = param_1;
  do {
    (**(code **)(puVar1[0x2e] + 0xc))((int)puVar3 + (int)*(short *)(puVar1[0x2e] + 8));
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 10;
    puVar3 = puVar3 + 10;
  } while (iVar2 < 4);
  iVar2 = 0;
  puVar1 = param_1 + 0x52;
  do {
    FUN_0892e69c(puVar1);
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 5;
  } while (iVar2 < 1);
  param_1[0x57] = 0;
  return;
}

