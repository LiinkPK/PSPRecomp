/* Entry 0x0885D41C | file offset 0x0005A3F4 | FUN_0885d41c | bytes 1604 */

void FUN_0885d41c(int *param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  
  puVar4 = (uint *)*param_1;
  uVar2 = *param_2 ^ *puVar4;
  iVar1 = param_1[1];
  uVar3 = (*(int *)(iVar1 + (uVar2 >> 0x18) * 4) +
           *(int *)(iVar1 + (uVar2 >> 0x10 & 0xff) * 4 + 0x400) ^
          *(uint *)(iVar1 + (uVar2 >> 8 & 0xff) * 4 + 0x800)) +
          *(int *)(iVar1 + (uVar2 & 0xff) * 4 + 0xc00) ^ puVar4[1] ^ *param_3;
  uVar2 = (*(int *)(iVar1 + (uVar3 >> 0x18) * 4) +
           *(int *)(iVar1 + (uVar3 >> 0x10 & 0xff) * 4 + 0x400) ^
          *(uint *)(iVar1 + (uVar3 >> 8 & 0xff) * 4 + 0x800)) +
          *(int *)(iVar1 + (uVar3 & 0xff) * 4 + 0xc00) ^ puVar4[2] ^ uVar2;
  uVar3 = (*(int *)(iVar1 + (uVar2 >> 0x18) * 4) +
           *(int *)(iVar1 + (uVar2 >> 0x10 & 0xff) * 4 + 0x400) ^
          *(uint *)(iVar1 + (uVar2 >> 8 & 0xff) * 4 + 0x800)) +
          *(int *)(iVar1 + (uVar2 & 0xff) * 4 + 0xc00) ^ puVar4[3] ^ uVar3;
  uVar2 = (*(int *)(iVar1 + (uVar3 >> 0x18) * 4) +
           *(int *)(iVar1 + (uVar3 >> 0x10 & 0xff) * 4 + 0x400) ^
          *(uint *)(iVar1 + (uVar3 >> 8 & 0xff) * 4 + 0x800)) +
          *(int *)(iVar1 + (uVar3 & 0xff) * 4 + 0xc00) ^ puVar4[4] ^ uVar2;
  uVar3 = (*(int *)(iVar1 + (uVar2 >> 0x18) * 4) +
           *(int *)(iVar1 + (uVar2 >> 0x10 & 0xff) * 4 + 0x400) ^
          *(uint *)(iVar1 + (uVar2 >> 8 & 0xff) * 4 + 0x800)) +
          *(int *)(iVar1 + (uVar2 & 0xff) * 4 + 0xc00) ^ puVar4[5] ^ uVar3;
  uVar2 = (*(int *)(iVar1 + (uVar3 >> 0x18) * 4) +
           *(int *)(iVar1 + (uVar3 >> 0x10 & 0xff) * 4 + 0x400) ^
          *(uint *)(iVar1 + (uVar3 >> 8 & 0xff) * 4 + 0x800)) +
          *(int *)(iVar1 + (uVar3 & 0xff) * 4 + 0xc00) ^ puVar4[6] ^ uVar2;
  uVar3 = (*(int *)(iVar1 + (uVar2 >> 0x18) * 4) +
           *(int *)(iVar1 + (uVar2 >> 0x10 & 0xff) * 4 + 0x400) ^
          *(uint *)(iVar1 + (uVar2 >> 8 & 0xff) * 4 + 0x800)) +
          *(int *)(iVar1 + (uVar2 & 0xff) * 4 + 0xc00) ^ puVar4[7] ^ uVar3;
  uVar2 = (*(int *)(iVar1 + (uVar3 >> 0x18) * 4) +
           *(int *)(iVar1 + (uVar3 >> 0x10 & 0xff) * 4 + 0x400) ^
          *(uint *)(iVar1 + (uVar3 >> 8 & 0xff) * 4 + 0x800)) +
          *(int *)(iVar1 + (uVar3 & 0xff) * 4 + 0xc00) ^ puVar4[8] ^ uVar2;
  uVar3 = (*(int *)(iVar1 + (uVar2 >> 0x18) * 4) +
           *(int *)(iVar1 + (uVar2 >> 0x10 & 0xff) * 4 + 0x400) ^
          *(uint *)(iVar1 + (uVar2 >> 8 & 0xff) * 4 + 0x800)) +
          *(int *)(iVar1 + (uVar2 & 0xff) * 4 + 0xc00) ^ puVar4[9] ^ uVar3;
  uVar2 = (*(int *)(iVar1 + (uVar3 >> 0x18) * 4) +
           *(int *)(iVar1 + (uVar3 >> 0x10 & 0xff) * 4 + 0x400) ^
          *(uint *)(iVar1 + (uVar3 >> 8 & 0xff) * 4 + 0x800)) +
          *(int *)(iVar1 + (uVar3 & 0xff) * 4 + 0xc00) ^ puVar4[10] ^ uVar2;
  uVar3 = (*(int *)(iVar1 + (uVar2 >> 0x18) * 4) +
           *(int *)(iVar1 + (uVar2 >> 0x10 & 0xff) * 4 + 0x400) ^
          *(uint *)(iVar1 + (uVar2 >> 8 & 0xff) * 4 + 0x800)) +
          *(int *)(iVar1 + (uVar2 & 0xff) * 4 + 0xc00) ^ puVar4[0xb] ^ uVar3;
  uVar2 = (*(int *)(iVar1 + (uVar3 >> 0x18) * 4) +
           *(int *)(iVar1 + (uVar3 >> 0x10 & 0xff) * 4 + 0x400) ^
          *(uint *)(iVar1 + (uVar3 >> 8 & 0xff) * 4 + 0x800)) +
          *(int *)(iVar1 + (uVar3 & 0xff) * 4 + 0xc00) ^ puVar4[0xc] ^ uVar2;
  uVar3 = (*(int *)(iVar1 + (uVar2 >> 0x18) * 4) +
           *(int *)(iVar1 + (uVar2 >> 0x10 & 0xff) * 4 + 0x400) ^
          *(uint *)(iVar1 + (uVar2 >> 8 & 0xff) * 4 + 0x800)) +
          *(int *)(iVar1 + (uVar2 & 0xff) * 4 + 0xc00) ^ puVar4[0xd] ^ uVar3;
  uVar2 = (*(int *)(iVar1 + (uVar3 >> 0x18) * 4) +
           *(int *)(iVar1 + (uVar3 >> 0x10 & 0xff) * 4 + 0x400) ^
          *(uint *)(iVar1 + (uVar3 >> 8 & 0xff) * 4 + 0x800)) +
          *(int *)(iVar1 + (uVar3 & 0xff) * 4 + 0xc00) ^ puVar4[0xe] ^ uVar2;
  uVar3 = (*(int *)(iVar1 + (uVar2 >> 0x18) * 4) +
           *(int *)(iVar1 + (uVar2 >> 0x10 & 0xff) * 4 + 0x400) ^
          *(uint *)(iVar1 + (uVar2 >> 8 & 0xff) * 4 + 0x800)) +
          *(int *)(iVar1 + (uVar2 & 0xff) * 4 + 0xc00) ^ puVar4[0xf] ^ uVar3;
  uVar5 = puVar4[0x11];
  *param_3 = (*(int *)(iVar1 + (uVar3 >> 0x18) * 4) +
              *(int *)(iVar1 + (uVar3 >> 0x10 & 0xff) * 4 + 0x400) ^
             *(uint *)(iVar1 + (uVar3 >> 8 & 0xff) * 4 + 0x800)) +
             *(int *)(iVar1 + (uVar3 & 0xff) * 4 + 0xc00) ^ puVar4[0x10] ^ uVar2;
  *param_2 = uVar3 ^ uVar5;
  return;
}

