/* Entry 0x0885DA60 | file offset 0x0005AA38 | FUN_0885da60 | bytes 1604 */

void FUN_0885da60(int *param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  puVar5 = (uint *)*param_1;
  uVar2 = *param_2 ^ puVar5[0x11];
  iVar1 = param_1[1];
  uVar3 = (*(int *)(iVar1 + (uVar2 >> 0x18) * 4) +
           *(int *)(iVar1 + (uVar2 >> 0x10 & 0xff) * 4 + 0x400) ^
          *(uint *)(iVar1 + (uVar2 >> 8 & 0xff) * 4 + 0x800)) +
          *(int *)(iVar1 + (uVar2 & 0xff) * 4 + 0xc00) ^ puVar5[0x10] ^ *param_3;
  uVar2 = (*(int *)(iVar1 + (uVar3 >> 0x18) * 4) +
           *(int *)(iVar1 + (uVar3 >> 0x10 & 0xff) * 4 + 0x400) ^
          *(uint *)(iVar1 + (uVar3 >> 8 & 0xff) * 4 + 0x800)) +
          *(int *)(iVar1 + (uVar3 & 0xff) * 4 + 0xc00) ^ puVar5[0xf] ^ uVar2;
  uVar3 = (*(int *)(iVar1 + (uVar2 >> 0x18) * 4) +
           *(int *)(iVar1 + (uVar2 >> 0x10 & 0xff) * 4 + 0x400) ^
          *(uint *)(iVar1 + (uVar2 >> 8 & 0xff) * 4 + 0x800)) +
          *(int *)(iVar1 + (uVar2 & 0xff) * 4 + 0xc00) ^ puVar5[0xe] ^ uVar3;
  uVar2 = (*(int *)(iVar1 + (uVar3 >> 0x18) * 4) +
           *(int *)(iVar1 + (uVar3 >> 0x10 & 0xff) * 4 + 0x400) ^
          *(uint *)(iVar1 + (uVar3 >> 8 & 0xff) * 4 + 0x800)) +
          *(int *)(iVar1 + (uVar3 & 0xff) * 4 + 0xc00) ^ puVar5[0xd] ^ uVar2;
  uVar3 = (*(int *)(iVar1 + (uVar2 >> 0x18) * 4) +
           *(int *)(iVar1 + (uVar2 >> 0x10 & 0xff) * 4 + 0x400) ^
          *(uint *)(iVar1 + (uVar2 >> 8 & 0xff) * 4 + 0x800)) +
          *(int *)(iVar1 + (uVar2 & 0xff) * 4 + 0xc00) ^ puVar5[0xc] ^ uVar3;
  uVar2 = (*(int *)(iVar1 + (uVar3 >> 0x18) * 4) +
           *(int *)(iVar1 + (uVar3 >> 0x10 & 0xff) * 4 + 0x400) ^
          *(uint *)(iVar1 + (uVar3 >> 8 & 0xff) * 4 + 0x800)) +
          *(int *)(iVar1 + (uVar3 & 0xff) * 4 + 0xc00) ^ puVar5[0xb] ^ uVar2;
  uVar3 = (*(int *)(iVar1 + (uVar2 >> 0x18) * 4) +
           *(int *)(iVar1 + (uVar2 >> 0x10 & 0xff) * 4 + 0x400) ^
          *(uint *)(iVar1 + (uVar2 >> 8 & 0xff) * 4 + 0x800)) +
          *(int *)(iVar1 + (uVar2 & 0xff) * 4 + 0xc00) ^ puVar5[10] ^ uVar3;
  uVar2 = (*(int *)(iVar1 + (uVar3 >> 0x18) * 4) +
           *(int *)(iVar1 + (uVar3 >> 0x10 & 0xff) * 4 + 0x400) ^
          *(uint *)(iVar1 + (uVar3 >> 8 & 0xff) * 4 + 0x800)) +
          *(int *)(iVar1 + (uVar3 & 0xff) * 4 + 0xc00) ^ puVar5[9] ^ uVar2;
  uVar3 = (*(int *)(iVar1 + (uVar2 >> 0x18) * 4) +
           *(int *)(iVar1 + (uVar2 >> 0x10 & 0xff) * 4 + 0x400) ^
          *(uint *)(iVar1 + (uVar2 >> 8 & 0xff) * 4 + 0x800)) +
          *(int *)(iVar1 + (uVar2 & 0xff) * 4 + 0xc00) ^ puVar5[8] ^ uVar3;
  uVar2 = (*(int *)(iVar1 + (uVar3 >> 0x18) * 4) +
           *(int *)(iVar1 + (uVar3 >> 0x10 & 0xff) * 4 + 0x400) ^
          *(uint *)(iVar1 + (uVar3 >> 8 & 0xff) * 4 + 0x800)) +
          *(int *)(iVar1 + (uVar3 & 0xff) * 4 + 0xc00) ^ puVar5[7] ^ uVar2;
  uVar3 = (*(int *)(iVar1 + (uVar2 >> 0x18) * 4) +
           *(int *)(iVar1 + (uVar2 >> 0x10 & 0xff) * 4 + 0x400) ^
          *(uint *)(iVar1 + (uVar2 >> 8 & 0xff) * 4 + 0x800)) +
          *(int *)(iVar1 + (uVar2 & 0xff) * 4 + 0xc00) ^ puVar5[6] ^ uVar3;
  uVar2 = (*(int *)(iVar1 + (uVar3 >> 0x18) * 4) +
           *(int *)(iVar1 + (uVar3 >> 0x10 & 0xff) * 4 + 0x400) ^
          *(uint *)(iVar1 + (uVar3 >> 8 & 0xff) * 4 + 0x800)) +
          *(int *)(iVar1 + (uVar3 & 0xff) * 4 + 0xc00) ^ puVar5[5] ^ uVar2;
  uVar3 = (*(int *)(iVar1 + (uVar2 >> 0x18) * 4) +
           *(int *)(iVar1 + (uVar2 >> 0x10 & 0xff) * 4 + 0x400) ^
          *(uint *)(iVar1 + (uVar2 >> 8 & 0xff) * 4 + 0x800)) +
          *(int *)(iVar1 + (uVar2 & 0xff) * 4 + 0xc00) ^ puVar5[4] ^ uVar3;
  uVar2 = (*(int *)(iVar1 + (uVar3 >> 0x18) * 4) +
           *(int *)(iVar1 + (uVar3 >> 0x10 & 0xff) * 4 + 0x400) ^
          *(uint *)(iVar1 + (uVar3 >> 8 & 0xff) * 4 + 0x800)) +
          *(int *)(iVar1 + (uVar3 & 0xff) * 4 + 0xc00) ^ puVar5[3] ^ uVar2;
  uVar3 = (*(int *)(iVar1 + (uVar2 >> 0x18) * 4) +
           *(int *)(iVar1 + (uVar2 >> 0x10 & 0xff) * 4 + 0x400) ^
          *(uint *)(iVar1 + (uVar2 >> 8 & 0xff) * 4 + 0x800)) +
          *(int *)(iVar1 + (uVar2 & 0xff) * 4 + 0xc00) ^ puVar5[2] ^ uVar3;
  iVar4 = *(int *)(iVar1 + (uVar3 >> 0x18) * 4);
  iVar6 = *(int *)(iVar1 + (uVar3 >> 0x10 & 0xff) * 4 + 0x400);
  uVar7 = *(uint *)(iVar1 + (uVar3 >> 8 & 0xff) * 4 + 0x800);
  iVar1 = *(int *)(iVar1 + (uVar3 & 0xff) * 4 + 0xc00);
  uVar8 = puVar5[1];
  *param_2 = uVar3 ^ *puVar5;
  *param_3 = (iVar4 + iVar6 ^ uVar7) + iVar1 ^ uVar8 ^ uVar2;
  return;
}

